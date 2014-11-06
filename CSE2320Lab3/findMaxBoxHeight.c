#include <stdio.h>
#include <stdlib.h>

typedef struct boxes{
	int width, depth, height;
}Box;

int compare(Box * A, Box * B){
	if (((A->depth)*(A->width))<((B->depth)*(B->width))){
		return 1;
	}
	else if (((A->depth)*(A->width))>((B->depth)*(B->width))){
		return -1;
	}
	else{
		return 0;
	}
}

void sort(Box arr[], int size){
	qsort(arr, size, sizeof(arr[0]), compare);
}

void generateMaxHeightArray(int maxheight[], Box array[], int size){
	for (int i = 0; i < size; i++){
		maxheight[i] = array[i].height;
	}
}

void DPMaxHeight(int maxheight[], Box array[], int size){
	for (int i = 1; i < size; i++){
		for (int j = 0; j < i; j++){
			if ((array[i].width < array[j].width) && (array[i].depth < array[j].depth) && (array[i].height < array[j].height) && (maxheight[i] < maxheight[j] + array[i].height)){
				maxheight[i] = maxheight[j] + array[i].height;
			}
		}
	}
}

int main(int argc, char *argv[]){
	int size;
	scanf("%d", &size);
	Box * array = (Box*)malloc(size * sizeof(Box));
	int width, depth, height;
	for (int i = 0; i < size; i++){
		scanf("%d", &width);
		scanf("%d", &depth);
		scanf("%d", &height);
		array[i].depth = depth;
		array[i].width = width;
		array[i].height = height;
	}

	sort(array, size);

	int * maxheight = (int*)malloc(size*sizeof(int));
	generateMaxHeightArray(maxheight, array, size);
	DPMaxHeight(maxheight, array, size);
	int max = 0;
	for (int i = 0; i < size; i++){
		if (max < maxheight[i]){
			max = maxheight[i];
		}
	}
	printf("Max height is %d\n\n", max);
}
