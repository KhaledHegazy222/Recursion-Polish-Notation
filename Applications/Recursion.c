#include <stdio.h>

void move_disks(int count,int start,int finish,int tmp){
    if(count == 1){
        printf("Move one disk from %d to %d\n",start,finish);
        return;
    }
    move_disks(count-1,start,tmp,finish);
    move_disks(1,start,finish,tmp);
    move_disks(count-1,tmp,finish,start);
}



/*
    Better Implementation:

    void move_disks(int count , int start ,int finish,int tmp){
        if(count > 0){
            move_disks(count - 1, start,tmp ,finish);
            printf("Move disk %d from %d to %d \n",count , start , finish);
            move_disks(count - 1,tmp . finish ,start );
        }

    }




*/

int main(void){
    int x = 3;
    move_disks(x,1,3,2);

}
