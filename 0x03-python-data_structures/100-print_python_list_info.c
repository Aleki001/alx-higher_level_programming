#include <python.h>
#include <object.h>
#include <listobject.h>
void print_python_list_info(PyObject *p)
{
	int x;
	long int size = PyList_Size(p);
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (x = 0; x < size; x++)
		printf("Element %i: %s\n", x, Py_TYPE(obj->ob_item[x])->tp_name);
}
