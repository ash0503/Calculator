#include <iostream.h>
#include <conio.h>

void number();
int num[10], i = 0, j = 0, ch, choice[10];

void main() {
    int x, y, z, sm, temp[2];
    clrscr();

    do {
	ch = getch();
	if(ch<58 && ch>47) {
	    number();
	}
	else if(ch == 42 || ch == 43 || ch == 45 || ch == 47) {
	    if(ch == 42) {
		cout<<"*";
		i++;
		choice[j] = 1;
		j++;
	    }
	    else if(ch == 43) {
		cout<<"+";
		i++;
		choice[j] = 2;
		j++;
	    }
	    else if(ch == 45) {
		cout<<"-";
		i++;
		choice[j] = 3;
		j++;
	    }
	    else {
		cout<<"/";
		i++;
		choice[j] = 4;
		j++;
	    }
	}
    }
    while(ch != 13);
    i = 1;
    for(x=0 ; x<=j ; x++) {
	switch(choice[x])
	{
	    case 1:
	    num[0] = num[0] * num[i];
	    break;

	    case 2:
	    num[0] = num[0] + num[i];
	    break;

	    case 3:
	    num[0] = num[0] - num[i];
	    break;

	    case 4:
	    num[0] = num[0] / num[i];
	    break;
	}
	i++;
    }
    cout<<"="<<num[0];
    getch();
}

void number() {
    int digit;
    digit = ch - 48;
    cout<<digit;
    num[i] = num[i]*10 + digit;
}