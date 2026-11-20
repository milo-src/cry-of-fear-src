
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120620 <.text+0x11f620>:
10120620:	56                   	push   esi
10120621:	68 cc 6d 1e 10       	push   0x101e6dcc
10120626:	6a 01                	push   0x1
10120628:	8b f1                	mov    esi,ecx
1012062a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10120630:	8b 36                	mov    esi,DWORD PTR [esi]
10120632:	83 c4 08             	add    esp,0x8
10120635:	85 f6                	test   esi,esi
10120637:	74 2d                	je     0x10120666
10120639:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10120640:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
10120643:	ff 34 85 d0 ba 21 10 	push   DWORD PTR [eax*4+0x1021bad0]
1012064a:	8d 46 40             	lea    eax,[esi+0x40]
1012064d:	50                   	push   eax
1012064e:	56                   	push   esi
1012064f:	68 dc 6d 1e 10       	push   0x101e6ddc
10120654:	6a 01                	push   0x1
10120656:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1012065c:	8b 76 64             	mov    esi,DWORD PTR [esi+0x64]
1012065f:	83 c4 14             	add    esp,0x14
10120662:	85 f6                	test   esi,esi
10120664:	75 da                	jne    0x10120640
10120666:	5e                   	pop    esi
10120667:	c3                   	ret
