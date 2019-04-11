echo ���������� ��������� ����������, ���������� ��������� 1 ���
echo git config --global user.name viidzard
echo git config --global user.email viidzard@gmail.com
echo ������� ������� ���� ����� ������
git add -A
echo ������ ���� ��������� ���������, �� �������� � ����������� ��������� ���� ��������� ���������
git commit -a -m "comething new"
echo ���������� ��� ��������� �� ���������� ����������� � ��������� �������
git pull origin master
echo ���������� �������, ���� ��������� �������� � ��������� �����������
git push origin master
git remote add origin https://github.com/viidzard/lebedevtim.git
git push -u origin master