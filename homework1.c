#include <stdio.h>

int main(void)
{
  printf("Content type: text/html\n\n");
  printf("<html lang=en>\n");
  printf("<head><meta charset=\"UTF-8\"><title>A page</title>\n");
  printf("<style type=\"text/css\">\n");
  printf("p{color:#000000}\n");
  printf("</style>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<table>\n");
  printf("<tr>\n");
  printf("<td style=\"font-size:30px;\">个人疾病史</td>\n");
  printf("</tr>\n");
  printf("<tr>\n");
  printf("<td style=\"font-size:10px; color:red;\">问卷填写说明:所有标注<img src=\"../images/123.png\" />图标为必填项!</td>\n");
  printf("</tr>\n");
  printf("</table>\n");
  printf("<form>\n");
    printf("<table frame=\"box\">\n");
  printf("<table frame=\"box\">\n");
  printf("<p>01.您是否患有下列疾病,若有请选择,否则不用填写.</p>\n");
  printf("<tr>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >1型糖尿病</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >2型糖尿病</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >高血压</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >血脂异常</td>\n");
  printf("</tr>\n");
  printf("<tr>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >痛风/高血酸血压</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >冠心病/脑卒中</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >慢性支气管炎</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >肺气肿</td>\n");
  printf("</tr>\n");
  printf("<tr>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >肺癌</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >前列腺疾病史</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >前列腺癌</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >骨质疏松症</td>\n");
  printf("</tr>\n");
  printf("<tr>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >既往骨折史</td>\n");
  printf("<td><input type=\"checkbox\" name=\"illness\" value=\"illness\" >类风湿性关节炎</td>\n");
  printf("</tr>\n");
  printf("<table>\n");
  printf("<p>02.您是否患有与骨质疏松紧密相关的疾病,包括成年成骨不全,未治疗的长期甲状腺机能亢进,性腺机能减退,慢性营养不良以及慢性肝病等?</p>\n");
  printf("<input type=\"radio\" name=\"select\" value=\"yes\">是 \n");
  printf("<input type=\"radio\" name=\"select\" value=\"no\">否 \n");
  printf("<p>03.您是否目前正在服用或曾经服用过肾上腺皮质激素(如强的松,地塞米松等)超过3个月?</p>\n");
  printf("<input type=\"radio\" name=\"select\" value=\"yes\">是 \n");
  printf("<input type=\"radio\" name=\"select\" value=\"no\">否 \n");
  printf("<p align=\"right\">\n");
  printf("<input type=\"submit\"  style= \"background-color:blue; color:white\" value=\"上一页\">\n");
  printf("<input type=\"submit\"  style= \"background-color:green; color:white\" value=\"暂存问卷\">\n");
  printf("<input type=\"submit\"  style= \"background-color:blue; color:white\" value=\"下一页\">\n");
  printf("</p>\n");
    printf("<table>\n");
  printf("</form>\n");
  printf("</body>\n");
  printf("</html>\n");
  fflush(stdout);
 return 0;
}
