#include <stdio.h>

int main() {
  int num_students, num_subjects;
  printf("�л� ���� �Է��ϼ���: ");
  scanf("%d", &num_students);
  printf("���� ���� �Է��ϼ���: ");
  scanf("%d", &num_subjects);

  int scores[num_students][num_subjects];
  int total_scores[num_students] = {0};
  double avg_scores[num_students];

  for (int i = 0; i < num_students; i++) {
    printf("koposw%d �л��� ������ �Է��ϼ���:\n", i+1);
    for (int j = 0; j < num_subjects; j++) {
      scanf("%d", &scores[i][j]);
     total_scores[i] += scores[i][j];
    }
    avg_scores[i] = (double) total_scores[i] / num_subjects;
  }

  printf("\n");
  printf("�л��� ����ǥ\n");
  printf("��ȣ\t����\t���\n");
  for (int i = 0; i < num_students; i++) {
    printf("koposw%d\t%d\t%.2lf\n", i+1, total_scores[i], avg_scores[i]);
  }

  printf("\n");
  printf("���� �� ���\n");
  for (int j = 0; j < num_subjects; j++) {
    int subject_total = 0;
    for (int i = 0; i < num_students; i++) {
      subject_total += scores[i][j];
    }
    double subject_avg = (double) subject_total / num_students;
    printf("����%d\t%.2lf\n", j+1, subject_avg);
  }

  return 0;
}
