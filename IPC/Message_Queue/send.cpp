#include <iostream> 
#include <sys/ipc.h> 
#include <sys/msg.h> 
#define MAX 10 
using namespace std;
// structure for message queue 
struct mesg_buffer { 
	long mesg_type; 
	char mesg_text[100]; 
} message; 

int main() 
{ 
	key_t key; 
	int msgid; 

	// ftok to generate unique key 
	key = ftok("progfile", 65); 

	// msgget creates a message queue 
	// and returns identifier 
	msgid = msgget(key, 0666 | IPC_CREAT); 
	message.mesg_type = 1; 

	cout<<"Write Data : "<<endl; 
	fgets(message.mesg_text,MAX,stdin); 

	// msgsnd to send message 
	msgsnd(msgid, &message, sizeof(message), 0); 

	// display the message 
	cout<<"Data send is : "<< message.mesg_text<<endl; 

	return 0; 
} 
