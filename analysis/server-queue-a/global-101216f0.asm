
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101216f0 <.text+0x1206f0>:
101216f0:	55                   	push   ebp
101216f1:	8b ec                	mov    ebp,esp
101216f3:	6a ff                	push   0xffffffff
101216f5:	68 0d e2 19 10       	push   0x1019e20d
101216fa:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10121700:	50                   	push   eax
10121701:	51                   	push   ecx
10121702:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10121707:	33 c5                	xor    eax,ebp
10121709:	50                   	push   eax
1012170a:	8d 45 f4             	lea    eax,[ebp-0xc]
1012170d:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10121713:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10121716:	8d 4d f0             	lea    ecx,[ebp-0x10]
10121719:	e8 02 49 ff ff       	call   0x10116020
1012171e:	8d 45 f0             	lea    eax,[ebp-0x10]
10121721:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10121728:	50                   	push   eax
10121729:	b9 78 22 23 10       	mov    ecx,0x10232278
1012172e:	e8 4d ff ff ff       	call   0x10121680
10121733:	8d 4d f0             	lea    ecx,[ebp-0x10]
10121736:	e8 45 49 ff ff       	call   0x10116080
1012173b:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1012173e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10121745:	59                   	pop    ecx
10121746:	8b e5                	mov    esp,ebp
10121748:	5d                   	pop    ebp
10121749:	c3                   	ret
