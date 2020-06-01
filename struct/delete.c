#include<stdio.h>
#include"phone.h"
void deleteByName(struct Contact *PhoneBook)
{
		int i, j;
			char nametmp[10];
				printf("Enter a name to delete : ");
					scanf_s("%s",nametmp);
						for (i = 0; i < size; i++) {
									if (strcmp(PhoneBook[i].Name, nametmp) == 0) {
													for (j = i; j < size-1; i++) {
																		PhoneBook[j] = PhoneBook[j + 1];
																						memset(PhoneBook, 0, sizeof(PhoneBook[0]));
																										
																									}
															}
											else {
															printf("Oops! $s is not in the PhoneBook.",nametmp);
																	}
												}	
							printf("Deletion is done\n");
}

