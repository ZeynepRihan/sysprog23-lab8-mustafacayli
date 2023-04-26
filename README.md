[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/u7yXet_O)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10997119&assignment_repo_type=AssignmentRepo)
# sysprog23-lab8
## Prerequisetes 
- fork, wait, system calls
- file descriptors
- read, write, lseek system calls
## Details
### Part-1
size verilen ``.c`` uzantili dosyalarda file descriptorlarin farkli sekilde kullanimlari verilmistir. Bu dosyalari tek tek terminal uzerinden copile-build-run ederek calismalarini inceleyiniz.
### Part-2
``shared_fd2.c`` dosyasi child processin dosyaya yazdiklarini parent process alarak bunlari stdouta yazdirmaktadir.
Size verilen ``shared_fd3.c`` icerisinde ``shared_fd2.c``'ye benzer bir program yazarak bu programda 10 tane child process olusturup (sadece parent process olusturacak) her bir processing ``msglog.txt`` isminde bir dosyaya ``shared_fd2.c`` deki gibi pidleri ile birlikte mesaj yazdirdigi ve bu mesajlarin en sonunda parent process tarafindan konsola yazdirildigi bir program yaziniz.

#### Notes
- waitpid kullanimina dikkat ediniz, processleri tek tek degil dongu icerisinde olusturunuz, 
- Yazarken **Fonksiyonlari kullanarak program akisini basitlestiriniz..(mesela mesaj gondere ayri bir fonksiyon, mesaj okuma ayri bir fonksiyon..)**
- Wait ve forklari ayri ayri dongulere atiniz... Diger turlu serial computation yaparsiniz.
- **Fork bomba dikkat ediniz..!!!!**

## Grading
Tam not icin sadece **teslim etmeniz yetiyor**...
