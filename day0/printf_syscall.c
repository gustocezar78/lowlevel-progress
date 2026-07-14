#include <unistd.h>
#include <sys/syscall.h>

int main() {
    char mensagem[] = "Hello World via Syscall!\n";
/*
       A função syscall() conversa direto com o kernel.
       SYS_write = ID da operação de escrita no Linux.
       1         = Destino (Stdout / Terminal).
       mensagem  = O texto que criamos acima.
       25        = O tamanho exato do texto (número de caracteres).
*/
    syscall(SYS_write, 1, mensagem, 25);

    return 0;
}
