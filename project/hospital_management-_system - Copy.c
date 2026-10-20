#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for the linked list node
struct Patient
{
    int id;
    char name[50];
    int age;
    char disease[100];
    char contact[15];
    struct Patient* next;
};

// Function prototypes
void addPatient(struct Patient** head);
void deletePatient(struct Patient** head, int id);
void searchPatient(struct Patient* head, int id);
void displayPatients(struct Patient* head);
void dischargePatient(struct Patient** head, int id);

// Add a new patient to the list
void addPatient(struct Patient** head)
{
    struct Patient* new_patient = (struct Patient*)malloc(sizeof(struct Patient));

    if (!new_patient)
    {
        printf("Memory allocation error!\n");
        return;
    }

    printf("Enter Patient ID: ");
    scanf("%d", &new_patient->id);

    printf("Enter Patient Name: ");
    scanf("%s", new_patient->name);

    printf("Enter Age: ");
    scanf("%d", &new_patient->age);

    printf("Enter Disease: ");
    scanf("%s", new_patient->disease);

    printf("Enter Contact Number: ");
    scanf("%s", new_patient->contact);

    // Set the new patient's next to the current head
    new_patient->next = *head;
    // Update the head to the new patient
    *head = new_patient;

    printf("Patient record added successfully!\n");
}

// Delete a patient by ID
void deletePatient(struct Patient** head, int id)
{
    struct Patient* temp = *head;
    struct Patient* prev = NULL;

    // If the head holds the patient to be deleted
    if (temp != NULL && temp->id == id)
    {
        *head = temp->next; // Change head
        free(temp); // Free old head
        printf("Patient with ID %d deleted.\n", id);
        return;
    }

    // Search for the patient to be deleted
    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the patient was not found
    if (temp == NULL)
    {
        printf("Patient with ID %d not found.\n", id);
        return;
    }

    // Unlink the node and free memory
    prev->next = temp->next;
    free(temp);
    printf("Patient with ID %d deleted.\n", id);
}

// Search for a patient by ID
void searchPatient(struct Patient* head, int id)
{
    struct Patient* temp = head;

    // Traverse the list
    while (temp != NULL)
    {
        if (temp->id == id)
        {
            printf("Patient Found:\n");
            printf("ID: %d\n", temp->id);
            printf("Name: %s\n", temp->name);
            printf("Age: %d\n", temp->age);
            printf("Disease: %s\n", temp->disease);
            printf("Contact: %s\n", temp->contact);
            return;
        }
        temp = temp->next;
    }

    printf("Patient with ID %d not found.\n", id);
}

// Display all patients
void displayPatients(struct Patient* head)
{
    if (head == NULL)
    {
        printf("No patients found.\n");
        return;
    }

    struct Patient* temp = head;
    printf("Patient Records:\n");
    while (temp != NULL)
    {
        printf("\nID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Age: %d\n", temp->age);
        printf("Disease: %s\n", temp->disease);
        printf("Contact: %s\n", temp->contact);
        temp = temp->next;
    }
}

// Discharge a patient (same as deleting, but with a different message)
void dischargePatient(struct Patient** head, int id)
{
    struct Patient* temp = *head;
    struct Patient* prev = NULL;

    // If the head holds the patient to be discharged
    if (temp != NULL && temp->id == id)
    {
        *head = temp->next; // Change head
        free(temp); // Free old head
        printf("Patient with ID %d discharged.\n", id);
        return;
    }

    // Search for the patient to be discharged
    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the patient was not found
    if (temp == NULL)
    {
        printf("Patient with ID %d not found.\n", id);
        return;
    }

    // Unlink the node and free memory
    prev->next = temp->next;
    free(temp);
    printf("Patient with ID %d discharged.\n", id);
}

int main()
{
    struct Patient* head = NULL;
    int choice, id;

    while (1)
    {
        printf("\nHospital Management System\n");
        printf("1. Add Patient Record\n");
        printf("2. Delete Patient Record\n");
        printf("3. Search Patient Record\n");
        printf("4. Display All Patients\n");
        printf("5. Discharge Patient\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPatient(&head);
            break;
        case 2:
            printf("Enter Patient ID to delete: ");
            scanf("%d", &id);
            deletePatient(&head, id);
            break;
        case 3:
            printf("Enter Patient ID to search: ");
            scanf("%d", &id);
            searchPatient(head, id);
            break;
        case 4:
            displayPatients(head);
            break;
        case 5:
            printf("Enter Patient ID to discharge: ");
            scanf("%d", &id);
            dischargePatient(&head, id);
            break;
        case 6:
            printf("Exiting program...\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
