//Code Created By Isuru Hettiarachchi
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("#################################\nProject Letter 1.0\nDeveloped By Isuru Hettiarachchi\n#################################\n\n");
    int infinity = 1;
    while(infinity>0){
        printf("1->%c\n",1);
        printf("2->%c\n",2);
        printf("3->%c\n",3);
        printf("4->%c\n",4);
        printf("5->%c\n",5);
        printf("6->%c\n",6);
        char instruction [] = "Select Emoji Number You Want To Print Letters >>>";
        printf("%s",instruction);
        char emoji;

        char num[50];
        scanf("%s",&num);

        int calculate;

        for (calculate = 0; num[calculate] != '\0'; ++calculate)
            {
            }
        for (int q=0;calculate>q;q++){
                if (num[0]=='1'){
                    emoji = 1;
                    break;

                }
                else if(num[0]=='2'){
                    emoji = 2;
                    break;
                }

                else if(num[0]=='3'){
                    emoji= 3;
                    break;
                }

                else if(num[0]=='4'){
                    emoji= 4;
                    break;
                }

                else if(num[0]=='5'){
                    emoji= 5;
                    break;
                }

                else if(num[0]=='6'){
                    emoji= 6;
                    break;
                }

                else{
                    printf("You need to enter correct Number!");
                    break;


                    }



        }











        printf("%c\n",emoji);
        printf("Enter Your First Name:");
        char letter[50];
        scanf("%s",&letter);
        int count;

        for (count = 0; letter[count] != '\0'; ++count)
            {
            }
        for (int s=0;count>s;s++){


            if (letter[s] == 'A' || letter[s] == 'a'){
                int space[] = {8,0,7,1,0,6,3,0,5,5,0,4,0,3,9,0,2,11,0,1,13,0,15,0,0};
                int hash[] = {1,0,1,1,0,1,1,0,1,1,0,9,0,1,1,0,1,1,0,1,1,1,1,0,0};
                int i = 0;
                for(i; i<25 ; i++){
                    int j = 0;
                    for(j; j<space[i]; j++){
                    printf(" ");

                    }
                        if(space[i]== 0){
                        printf("\n");
                    }
                        int k = 0;
                    for(k; k<hash[i]; k++){


                    printf("%c",emoji);
                    }
                    }}


                else if(letter[s] == 'B' || letter[s] == 'b'){
                        int space[] = {1,0,11,0,11,0,0,11,0,12,0,12,0,11,0,1,0,0};
                        int hash[] = {11,1,2,1,2,12,1,2,1,2,1,2,1,2,0,10,0,0};
                        int i = 0;
                        for(i; i<18 ; i++){
                        int j = 0;
                        for(j; j<space[i]; j++){
                            printf(" ");

                        }
                            if(space[i]== 0){
                                printf("\n");
                            }
                            int k = 0;
                            for(k; k<hash[i]; k++){


                            printf("%c",emoji);
                            }
                            }
                }


                        else if(letter[s] == 'C' || letter[s] == 'c'){
                            int space[] = {3,0,1,10,0,0,0,0,0,0,1,10,0,3,0,0};
                            int hash[] = {10,0,2,2,1,1,1,1,1,0,2,2,0,10,0,0};
                            int i = 0;
                            for(i; i<16 ; i++){
                            int j = 0;
                            for(j; j<space[i]; j++){
                                printf(" ");

                            }
                                if(space[i]== 0){
                                    printf("\n");
                                }
                                int k = 0;
                                for(k; k<hash[i]; k++){


                                printf("%c",emoji);
                                }
                                }
                    }




                        else if(letter[s] == 'D' || letter[s] == 'd'){
                            int space[] = {1,0,10,0,12,0,12,0,12,0,12,0,12,0,10,0,1,0,0};
                            int hash[] = {10,1,2,1,2,1,2,1,2,1,2,1,2,1,2,0,10,0,0};
                            int i = 0;
                            for(i; i<19 ; i++){
                            int j = 0;
                            for(j; j<space[i]; j++){
                                printf(" ");

                            }
                                if(space[i]== 0){
                                    printf("\n");
                                }
                                int k = 0;
                                for(k; k<hash[i]; k++){


                                printf("%c",emoji);
                                }
                                }
                    }




                        else if(letter[s] == 'E' || letter[s] == 'e'){
                            int space[] = {1,0,0,0,0,0,0,0,0,1,0,0};
                            int hash[] = {14,1,1,1,12,1,1,1,0,14,0,0};
                            int i = 0;
                            for(i; i<12 ; i++){
                            int j = 0;
                            for(j; j<space[i]; j++){
                                printf(" ");

                            }
                                if(space[i]== 0){
                                    printf("\n");
                                }
                                int k = 0;
                                for(k; k<hash[i]; k++){


                                printf("%c",emoji);
                                }
                                }
                    }





                     else if(letter[s] == 'F' || letter[s] == 'f'){
                            int space[] = {1,0,0,0,0,0,0,0,0,0,0};
                            int hash[] = {14,1,1,1,12,1,1,1,1,0,0};
                            int i = 0;
                            for(i; i<11 ; i++){
                            int j = 0;
                            for(j; j<space[i]; j++){
                                printf(" ");

                            }
                                if(space[i]== 0){
                                    printf("\n");
                                }
                                int k = 0;
                                for(k; k<hash[i]; k++){


                                printf("%c",emoji);
                                }
                                }
                    }






                    else if(letter[s] == 'G' || letter[s] == 'g'){
                            int space[] = {1,0,11,0,12,0,0,0,7,0,11,1,0,11,1,0,1,2,0,0};
                            int hash[] = {12,1,2,1,2,1,1,1,7,1,1,1,1,1,1,0,11,1,0,0};
                            int i = 0;
                            for(i; i<20 ; i++){
                            int j = 0;
                            for(j; j<space[i]; j++){
                                printf(" ");

                            }
                                if(space[i]== 0){
                                    printf("\n");
                                }
                                int k = 0;
                                for(k; k<hash[i]; k++){


                                printf("%c",emoji);
                                }
                                }
                    }





                            else if(letter[s] == 'H' || letter[s] == 'h'){
                                int hash[] = {1,1,1,1,1,1,1,1,15,1,1,1,1,1,1,1,1,0};
                                int space[] = {13,0,13,0,13,0,13,0,0,13,0,13,0,13,0,13,0,0};
                                int i = 0;
                                for(i; i<18 ; i++){
                                        int j = 0;
                                       for(j; j<hash[i]; j++){
                                            printf("%c",emoji);


                                        }

                                            int k = 0;
                                            for(k; k<space[i]; k++){
                                                printf(" ");
                                                }


                                             if(space[i]== 0){
                                                printf("\n");
                                            }
                                    }

                                                            }





                            else if(letter[s] == 'I' || letter[s] == 'i'){
                                int hash[] = {15,0,1,0,1,0,1,0,1,0,1,0,1,0,1,15,0};
                                int space[] = {0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,0,0};
                                int i = 0;
                                for(i; i<17 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }






                                else if(letter[s] == 'J' || letter[s] == 'j'){
                                int hash[] = {15,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0};
                                int space[] = {0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,2,1,1,0,0,0};
                                int i = 0;
                                for(i; i<21 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }






                            else if(letter[s] == 'K' || letter[s] == 'k'){
                                int hash[] = {1,1,1,1,1,1,1,1,7,1,1,1,1,1,1,1,1,0};
                                int space[] = {13,0,11,0,9,0,7,0,0,7,0,9,0,11,0,13,0,0};
                                int i = 0;
                                for(i; i<18 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }










                            else if(letter[s] == 'L' || letter[s] == 'l'){

                                int hash[] = {1,1,1,1,1,1,1,1,15,0,0};
                                int space[] = {0,0,0,0,0,0,0,0,0,0,0};
                                int i = 0;
                                for(i; i<11 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }








                            else if(letter[s] == 'M' || letter[s] == 'm'){

                                int hash[] = {1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0};
                                int space[] = {13,0,13,0,11,0,1,9,1,0,2,7,2,0,3,5,3,0,4,3,4,0,5,1,5,0,6,6,0,0};
                                int i = 0;
                                for(i; i<30 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }






                                           else if(letter[s] == 'N' || letter[s] == 'n'){

                                                int hash[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0};
                                                int space[] = {13,0,1,11,0,2,10,0,4,8,0,6,6,0,8,4,0,10,2,0,11,1,0,13,0,0};
                                                int i = 0;
                                                for(i; i<26 ; i++){
                                                int j = 0;
                                                for(j; j<hash[i]; j++){
                                                    printf("%c",emoji);


                                                }

                                                    int k = 0;
                                                    for(k; k<space[i]; k++){
                                                        printf(" ");
                                                        }


                                                     if(space[i]== 0){
                                                        printf("\n");
                                                    }
                                            }
                                    }







                                           else if(letter[s] == 'O' || letter[s] == 'o'){

                                                int space[] = {3,0,1,11,0,13,0,13,0,13,0,13,0,13,0,1,11,0,3,0,0};
                                                int hash[] = {9,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,9,0,0};
                                                int i = 0;
                                                for(i; i<21 ; i++){
                                                int j = 0;
                                                    for(j; j<space[i]; j++){
                                                    printf(" ");

                                                    }
                                                        if(space[i]== 0){
                                                        printf("\n");
                                                    }
                                                        int k = 0;
                                                    for(k; k<hash[i]; k++){


                                                    printf("%c",emoji);
                                                    }
                                                    }

                                            }





                            else if(letter[s] == 'P' || letter[s] == 'p'){

                                int hash[] = {13,1,1,1,1,1,1,13,1,1,1,1,0};
                                int space[] = {0,13,0,13,0,13,0,0,0,0,0,0,0};
                                int i = 0;
                                for(i; i<13 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }





                            else if(letter[s] == 'Q' || letter[s] == 'q'){

                                int space[] = {3,0,1,11,0,13,0,13,0,13,0,13,0,8,4,0,1,9,1,0,3,0,15,0,0};
                                int hash[] = {9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,11,0,1,0,0};
                                int i = 0;
                                for(i; i<25 ; i++){
                                int j = 0;
                                for(j; j<space[i]; j++){
                                printf(" ");

                                }
                                if(space[i]== 0){
                                printf("\n");
                                                    }
                                int k = 0;
                                for(k; k<hash[i]; k++){


                                printf("%c",emoji);
                                                    }
                                                    }

                                            }




                            else if(letter[s] == 'R' || letter[s] == 'r'){

                                int hash[] = {13,1,1,1,1,1,1,13,1,1,1,1,1,1,1,1,0};
                                int space[] = {0,13,0,13,0,13,0,0,2,0,6,0,10,0,13,0,0};
                                int i = 0;
                                for(i; i<17 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }






                            else if(letter[s] == 'S' || letter[s] == 's'){

                                int space[] = {2,0,13,0,13,0,0,2,0,14,0,1,12,0,1,11,0,2,0,0};
                                int hash[] = {11,1,1,1,1,1,0,11,0,1,0,1,1,0,1,1,0,10,0,0};
                                int i = 0;
                                for(i; i<20 ; i++){
                                int j = 0;
                                for(j; j<space[i]; j++){
                                printf(" ");

                                }
                                if(space[i]== 0){
                                printf("\n");
                                                    }
                                int k = 0;
                                for(k; k<hash[i]; k++){


                                printf("%c",emoji);
                                                    }
                                                    }

                                            }





                             else if(letter[s] == 'T' || letter[s] == 't'){
                                int hash[] = {15,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
                                int space[] = {0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,0};
                                int i = 0;
                                for(i; i<18 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }




                            else if(letter[s] == 'U' || letter[s] == 'u'){
                                int hash[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,9,0};
                                int space[] = {13,0,13,0,13,0,13,0,13,0,13,0,13,0,1,11,0,3,0,0};
                                int i = 0;
                                for(i; i<20 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }





                            else if(letter[s] == 'V' || letter[s] == 'v'){
                                int hash[] = {1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0};
                                int space[] = {15,0,1,13,0,2,11,0,3,9,0,4,7,0,5,5,0,6,3,0,7,1,0,8,0,0};
                                int i = 0;
                                for(i; i<26 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }







                            else if(letter[s] == 'W' || letter[s] == 'w'){
                                int hash[] = {1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,0};
                                int space[] = {15,0,15,0,15,0,15,0,7,7,0,6,6,0,4,5,4,0,2,9,2,0,15,0,0};
                                int i = 0;
                                for(i; i<25 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }






                            else if(letter[s] == 'X' || letter[s] == 'x'){
                                int hash[] = {1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,1,0,1,1,0,1,1,1,1,0};
                                int space[] = {15,0,2,11,0,4,7,0,6,3,0,8,0,6,3,0,4,7,0,2,11,0,15,0,0};
                                int i = 0;
                                for(i; i<25 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }







                            else if(letter[s] == 'Y' || letter[s] == 'y'){
                                int hash[] = {1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0};
                                int space[] = {15,0,2,11,0,4,7,0,6,3,0,8,0,8,0,8,0,8,0,8,0,0};
                                int i = 0;
                                for(i; i<22 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }






                            else if(letter[s] == 'Z' || letter[s] == 'z'){
                                int hash[] = {16,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,16,0};
                                int space[] = {0,14,0,12,0,10,0,8,0,6,0,4,0,2,0,1,0,0};
                                int i = 0;
                                for(i; i<18 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }





                      else if(letter[s] == ' '){
                                int hash[] = {16,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,16,0};
                                int space[] = {0,14,0,12,0,10,0,8,0,6,0,4,0,2,0,1,0,0};
                                int i = 0;
                                for(i; i<18 ; i++){
                                int j = 0;
                                for(j; j<hash[i]; j++){
                                    printf("%c",emoji);


                                }

                                    int k = 0;
                                    for(k; k<space[i]; k++){
                                        printf(" ");
                                        }


                                     if(space[i]== 0){
                                        printf("\n");
                                    }
                            }
                    }





                    else     {
                                printf("\n\n\n\n\n\n\n\n\n");
                    }


}

        infinity++;

    }
    return 0;
}

