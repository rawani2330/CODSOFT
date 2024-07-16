#include <iostream>
#include <string>
using namespace std;

const int task_range = 10;
//construct strucrtue
struct Task {
    string input_task;
    bool completed;
};


Task tasks[task_range];
int task = 0;
//for adding task

void Add_Task(const string & detail) {
    if (task < task_range) {
        tasks[task].input_task = detail;
        tasks[task].completed = false;
        task++;
    } else {
        cout << "Completly Full...!" << endl;
    }
}

//view task

void View_Tasks() {
    for (int i = 0; i < task; i++) {
        cout << i + 1 << ":" << tasks[i].input_task;
        if (tasks[i].completed) {
            cout << " [Completed]";
        }
        
        cout << "\n";
    }
}

//task status is complete or not

void Task_Status(int index) {
    if (index >= 0 && index < task) {
        tasks[index].completed = true;
    } else {
        cout << "Invalid task index!" << endl;
    }
}
//remove the task

void delete_task(int index) {
    if (index >= 0 && index < task) {
        for (int i = index; i < task - 1; i++) {
            tasks[i] = tasks[i + 1];
        }
        task--;
    } else {
        cout << "Invalid task index!" << endl;
    }
}


//main function

int main() {
    int choice;
    string task_details;
    int num;

    do {
        cout<<"\n\n";
        cout << "To-Do List Menu\n";
        cout << "1. Add Task\n";
        cout << "2. Display Tasks\n";
        cout << "3. Complete Task\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout<<"Input the choice:\n";
        cin >> choice;
        cin.ignore(); 
        

        switch (choice) {
            case 1:
                cout << "Enter task for add: ";
                getline(cin, task_details);
                Add_Task(task_details);
                break;
            case 2:
               View_Tasks();
                break;
            case 3:
                cout << "Enter task number to complete: ";
                cin >> num;
             Task_Status(num - 1);
                break;
            case 4:
                cout << "Enter task number to remove: ";
                cin >> num;
                delete_task(num - 1);
                break;
            case 5:
                cout << "Thank You for Using\n";
                break;
            default:
                cout << "invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
