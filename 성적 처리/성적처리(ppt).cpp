#include <stdio.h>

int main() {
  int num_students, num_subjects;
  printf("학생 수를 입력하세요: ");
  scanf("%d", &num_students);
  printf("과목 수를 입력하세요: ");
  scanf("%d", &num_subjects);

  int scores[num_students][num_subjects];
  int total_scores[num_students] = {0};
  double avg_scores[num_students];

  for (int i = 0; i < num_students; i++) {
    printf("koposw%d 학생의 성적을 입력하세요:\n", i+1);
    for (int j = 0; j < num_subjects; j++) {
      scanf("%d", &scores[i][j]);
     total_scores[i] += scores[i][j];
    }
    avg_scores[i] = (double) total_scores[i] / num_subjects;
  }

  printf("\n");
  printf("학생별 성적표\n");
  printf("번호\t총점\t평균\n");
  for (int i = 0; i < num_students; i++) {
    printf("koposw%d\t%d\t%.2lf\n", i+1, total_scores[i], avg_scores[i]);
  }

  printf("\n");
  printf("과목별 반 평균\n");
  for (int j = 0; j < num_subjects; j++) {
    int subject_total = 0;
    for (int i = 0; i < num_students; i++) {
      subject_total += scores[i][j];
    }
    double subject_avg = (double) subject_total / num_students;
    printf("과목%d\t%.2lf\n", j+1, subject_avg);
  }

  return 0;
}
