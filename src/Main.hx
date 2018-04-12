package;
import haxe.ds.Vector;
import vm.bytecode.Instruction.Opcodes;
import vm.Vm;

class Main {


    static var hello:Array<Int> = [
        Opcodes.ICONST, 1,
        Opcodes.ICONST, 2,
        Opcodes.IADD,
        Opcodes.PRINT,
        Opcodes.HALT
    ];

    static function main() {
        var vm:Vm = new Vm(hello, 0, 0);

        vm.trace = true;
        vm.exec();
    }
}
