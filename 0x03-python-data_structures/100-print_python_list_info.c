#include <python.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_python_list_info - print basic info
 * @p: PyObject
 * Return: void
 */
void print_python_list_info(PyObject *p)
{
	PyListObject *obj = (PyListObject *)p;
	int size, x;
	PyObject *item;

	if (!PyList_Check(p))
	{
		printf("Error: Not a Python List.\n");
		return;
	}

	size = PyList_Size(p);

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);

	for (x = 0; x < size; x++)
	{
		item = PyList_GetItem(p, x);
		printf("Element %i: %s\n", x, Py_TYPE(item)->tp_name);
	}
}
