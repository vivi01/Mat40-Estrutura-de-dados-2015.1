# include <stdio.h>
# include <time.h>
 
 int main(void)
 {
     time_t horaSistema;
     struct tm  fusoHorario;
     char       buf[80];
 
    horaSistema = time(NULL);

     fusoHorario = *localtime(&horaSistema);
     strftime(buf, sizeof(buf), "%d/%B/%Y %H:%M", &fusoHorario);
     printf("%s\n", buf);
 
     return 0;
 }
