
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10121610 <.text+0x120610>:
10121610:	55                   	push   ebp
10121611:	8b ec                	mov    ebp,esp
10121613:	6a ff                	push   0xffffffff
10121615:	68 dd e1 19 10       	push   0x1019e1dd
1012161a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10121620:	50                   	push   eax
10121621:	83 ec 0c             	sub    esp,0xc
10121624:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10121629:	33 c5                	xor    eax,ebp
1012162b:	50                   	push   eax
1012162c:	8d 45 f4             	lea    eax,[ebp-0xc]
1012162f:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10121635:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10121638:	8d 4d e8             	lea    ecx,[ebp-0x18]
1012163b:	e8 e0 49 ff ff       	call   0x10116020
10121640:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
10121647:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
1012164e:	8d 45 e8             	lea    eax,[ebp-0x18]
10121651:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10121658:	50                   	push   eax
10121659:	b9 78 22 23 10       	mov    ecx,0x10232278
1012165e:	e8 ed fe ff ff       	call   0x10121550
10121663:	8d 4d e8             	lea    ecx,[ebp-0x18]
10121666:	e8 15 4a ff ff       	call   0x10116080
1012166b:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1012166e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10121675:	59                   	pop    ecx
10121676:	8b e5                	mov    esp,ebp
10121678:	5d                   	pop    ebp
10121679:	c3                   	ret
