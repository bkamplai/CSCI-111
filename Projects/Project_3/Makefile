./CC = gcc
CFLAGS = -Wall -g
LDFLAGS = 

all: driver.o blank_out_histogram.o det_num_of_stars.o display_hist.o display_stu_grades.o display_stu_names.o fill_out_histogram.o populate_stu_names.o randomize_stu_grades.o
	${CC} driver.o blank_out_histogram.o det_num_of_stars.o display_hist.o display_stu_grades.o display_stu_names.o fill_out_histogram.o populate_stu_names.o randomize_stu_grades.o -o all

driver.o: driver.c
	${CC} ${CFLAGS} -c driver.c

blank_out_histogram.o: blank_out_histogram.c
	${CC} ${CFLAGS} -c blank_out_histogram.c

det_num_of_stars.o: det_num_of_stars.c
	${CC} ${CFLAGS} -c det_num_of_stars.c

display_hist.o: display_hist.c
	${CC} ${CFLAGS} -c display_hist.c

display_stu_grades.o: display_stu_grades.c
	${CC} ${CFLAGS} -c display_stu_grades.c

fill_out_histogram.o: fill_out_histogram.c
	${CC} ${CFLAGS} -c fill_out_histogram.c

display_stu_names.o: display_stu_names.c
	${CC} ${CFLAGS} -c display_stu_names.c

populate_stu_names.o: populate_stu_names.c
	${CC} ${CFLAGS} -c populate_stu_names.c

randomize_stu_grades.o: randomize_stu_grades.c
	${CC} ${CFLAGS} -c randomize_stu_grades.c

clean:
	rm -rf *.o
	rm all