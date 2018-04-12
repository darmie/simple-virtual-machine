package;
import vm.bytecode.Instruction.Opcodes;
import vm.Vm;

class Main {


    static var hello:Array<Int> = [
        ICONST, 1,
        ICONST, 2,
        IADD,
        PRINT,
        HALT
    ];


    static var loop:Array<Int> = [
        // .GLOBALS 2; N, I
        // N = 10						ADDRESS
        ICONST, 10,				// 0
        GSTORE, 0,				// 2
        // I = 0
        ICONST, 0,				// 4
        GSTORE, 1,				// 6
        // WHILE I<N:
        // START (8):
        GLOAD, 1,				// 8
        GLOAD, 0,				// 10
        ILT,					// 12
        BRF, 24,				// 13
        //     I = I + 1
        GLOAD, 1,				// 15
        ICONST, 1,				// 17
        IADD,					// 19
        GSTORE, 1,				// 20
        BR, 8,					// 22
        // DONE (24):
        // PRINT "LOOPED "+N+" TIMES."
        HALT					// 24
    ];

    static function main() {
        var vm:Vm = new Vm(loop, 0, 2);

        vm.trace = true;
        vm.exec();
    }
}
