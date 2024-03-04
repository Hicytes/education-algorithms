with open('26_2580.txt', 'r') as file:
    content = list(map(lambda x : list(map(int, x.strip().split())), file.readlines()))
    print(content[0])
    k = content[0][1]
    content.pop(0)

    content.sort(key= lambda x : x[1])
    print(k)

    content_new = []
    for event in content:
        if event[1] == 0 or event[1] > k:
            content_new.append(event) 
    # content_new = [[t_start, 0], ..., [t_start, 0], [t_start, t_finish_1], ..., [t_start, t_finish_m]]
    # finish_i >= finish_j if i > j

    content_zero_zero = []
    for event in content_new:
        if event[0] == 0 and event[1] == 0:
            content_zero_zero.append(event)
    print(len(content_zero_zero))

    # .........................................................
    # ......+++++++............................................
    # ..........+++++++++++++++++++++++........................ 
    # ...........++++++++++++++++.............................. 
    # ............->...................<-......................
