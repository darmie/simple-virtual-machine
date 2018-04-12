package vm.bytecode;


@:enum
abstract Opcodes(Int) from Int to Int{

    // INSTRUCTION BYTECODES (byte is signed; use a short to keep 0..255)
     var IADD = 1;     // int add
     var ISUB = 2;
     var IMUL = 3;
     var ILT  = 4;     // int less than
     var IEQ  = 5;     // int equal
     var BR   = 6;     // branch
     var BRT  = 7;     // branch if true
     var BRF   = 8;     // branch if true
     var ICONST= 9;   // push constant integer
     var LOAD = 10;  // load from local context
     var GLOAD = 11;  // load from global memory
     var STORE = 12;  // store in local context
     var GSTORE  = 13;  // store in global memory
     var PRINT   = 14;  // print stack top
     var POP     = 15;    // throw away top of stack
    //  var CALL    = 16;
    //  var RET     = 17;    // return with/without value

     var HALT  =   16;
}

class Instruction {
    public var name:String;
    public var n:Int = 0;
    public function new(name:String, ?nargs:Int) {
        this.n = nargs;
        this.name = name;
        
    }



    public static var instructions:Array<Instruction> = [
        null, // <INVALID>
        new Instruction("iadd"), // index is the opcode
        new Instruction("isub"),
        new Instruction("imul"),
        new Instruction("ilt"),
        new Instruction("ieq"),
        new Instruction("br", 1),
        new Instruction("brt", 1),
        new Instruction("brf", 1),
        new Instruction("iconst", 1),
        new Instruction("load", 1),
        new Instruction("gload", 1),
        new Instruction("store", 1),
        new Instruction("gstore", 1),
        new Instruction("print"),
        new Instruction("pop"),
        //new Instruction("call", 2), // call addr, nargs
        //new Instruction("ret"),
        new Instruction("halt")
    ];
}
