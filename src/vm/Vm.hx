package vm;

import vm.bytecode.Instruction.Opcodes;
import StringBuf;
import vm.bytecode.Instruction.*;
import haxe.ds.Vector;



/** A simple stack-based interpreter */
class Vm {
    public static var DEFAULT_STACK_SIZE:Int = 1000;
    //public static var DEFAULT_CALL_STACK_SIZE = 1000;
    public static var FALSE :Int= 0;
    public static var TRUE:Int= 1;
    
        // registers
    private var ip:Int;             // instruction pointer register
    private var sp:Int = -1;  		// stack pointer register
    //int callsp = -1;    // call stack pointer register

    private var startip:Int = 0;	// where execution begins
    
        // memory
    private var code:Array<Int>;         // word-addressable code memory but still bytecodes.
    private var globals:Vector<Int>;      // global variable space
    private var stack:Vector<Int>;		// Operand stack, grows upwards
    //Context[] callstack;// call stack, grows upwards

    public var trace:Bool = false;
    
    public function new(code:Array<Int>, startip:Int, nglobals:Int) {

        this.code = code;
        this.startip = startip;
        globals = new Vector<Int>(nglobals);
        stack = new Vector<Int>(DEFAULT_STACK_SIZE);
        //callstack = new Context[DEFAULT_CALL_STACK_SIZE];
    }


    public function exec(){
        ip = startip;
        cpu();
    }

    /** Simulate the fetch-decode execute cycle */
    private function cpu(){
        var opcode = code[ip];
        var a,b,addr,regnum;

        while (opcode!= Opcodes.HALT && ip < code.length) {
            if ( trace ) Sys.print(de.polygonal.Printf.format("%-35s",[disInstr()]));

            ip++;

            switch(opcode){
                case Opcodes.IADD:
                    b = stack[sp--];
                    a = stack[sp--];
                    stack[++sp] = a + b;
                case Opcodes.ISUB:
                    b = stack[sp--];
                    a = stack[sp--];
                    stack[++sp] = a - b;
                case Opcodes.IMUL:
                    b = stack[sp--];
                    a = stack[sp--];
                    stack[++sp] = a * b;
                case Opcodes.ILT:
                    b = stack[sp--];
                    a = stack[sp--];
                    stack[++sp] = (a < b) ? TRUE : FALSE;
                case Opcodes.IEQ:
                    b = stack[sp--];
                    a = stack[sp--];
                    stack[++sp] = (a == b) ? TRUE : FALSE;
                case Opcodes.BR:
                    ip = code[ip++];
                case Opcodes.BRT:
                    addr = code[ip++];
                    if ( stack[sp--]==TRUE ) ip = addr;
                case Opcodes.BRF:
                    addr = code[ip++];
                    if ( stack[sp--]==FALSE ) ip = addr;
                case Opcodes.ICONST:
                    stack[++sp] = code[ip++]; // push operand
                case Opcodes.GLOAD: // load local or arg
                    addr = code[ip++];
                    stack[++sp] = globals[addr];
                case Opcodes.GSTORE:
                    addr = code[ip++];
                    globals[addr] = stack[sp--];
                case Opcodes.PRINT:
                    Sys.println(stack[sp--]);
                case Opcodes.POP:
                    --sp;
                default:
                    throw "invalid opcode: "+opcode+" at ip="+(ip-1);
            }

            if ( trace ) Sys.println(stackString());
            opcode = code[ip];
        }

        if ( trace ) Sys.print(de.polygonal.Printf.format("%-35s",[disInstr()]));
        if ( trace ) Sys.println(stackString());
        if ( trace ) dumpDataMemory();
    }



    private function disInstr():String {
        var buf = new StringBuf();

        buf.add("stack=[");

        var i = 0;

        while(i <= sp){
            var o = stack[i];
            buf.add(" ");
            buf.add(o);
            i++;
        }

        buf.add(" ]");
        return buf.toString();
    }

    private function stackString():String {
        var opcode = code[ip];
        var opName = instructions[opcode].name;

        var buf = new StringBuf();

        buf.add(de.polygonal.Printf.format("%04d:\t%-11s", [ip, opName]));

        var nargs = instructions[opcode].n;

        if ( nargs>0 ) {
            var operands = new Array<String>();
            var k=ip+1;
            while(k<=ip+nargs) {
                operands.push(Std.string(code[k]));
                k++;
            }

            for(i in 0...operands.length){
                var s = operands[i];
                if ( i>0 ) buf.add(", ");
                buf.add(s);
            }
        }

        return buf.toString();
    }


    private function dumpDataMemory(){
        //
    }
}
