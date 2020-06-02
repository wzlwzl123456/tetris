void Game::Welcome()
{
	settextcolor(WHITE);
	settextstyle(60, 0, _T("黑体"));
	outtextxy(440, 200, "我罗斯方块");
	settextstyle(30, 0, "黑体");
	outtextxy(200, 300, "我罗斯方块是俄罗斯方块的改进版");
	outtextxy(200, 400, "当一名玩家消去一行，就会让另一名玩家最底下增加随机一行");
	outtextxy(400, 500, "输入空格开始，输入e退出");
	char input;
	input = getch();
	if (input == ' ')
	{
		return 0;
	}
	if (input == 'e')
	{
		exit(0);
	}
}
void Game::GameOver()
{
	settextcolor(WHITE);
	sttextstyle(60, 0, _T("黑体"));
	outtextxy(440, 200, "GameOver");
	if (P2_map.gettop())
	{
		outtextxy(500, 300, "P1win!");
	}
	else {
		outtextxy(500, 300, "P2win!");
	}
	outtextxy(400, 500, "输入空格继续，输入e退出");
	char input;
	input = getch();
	if (input == ' ')
	{
		return 0;
	}
	if (input == 'e')
	{
		exit(0);
	}
}