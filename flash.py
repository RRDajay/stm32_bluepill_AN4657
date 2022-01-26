flash_page_size = 1023

for num in range(0,128):
    start = hex(0x8000000 + (flash_page_size*num) + num)
    end = hex(0x8000000 + (flash_page_size*(num+1)) + num)
    print("{}".format(start))

