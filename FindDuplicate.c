int findDuplicate(int* nums, int numsSize) {
    int unknown =  nums[0];
    int unknown1 = nums[0];
    do{
        unknown = nums[unknown];
        unknown1 = nums[nums[unknown1]];

    }while(unknown != unknown1);

    unknown = nums[0];
    while(unknown !=  unknown1){
        unknown = nums[unknown];
        unknown1 = nums[unknown1];

    }
    return unknown1;
    
}