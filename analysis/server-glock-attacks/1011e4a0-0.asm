
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011e4a0 <.text+0x11d4a0>:
1011e4a0:	56                   	push   esi
1011e4a1:	8b f1                	mov    esi,ecx
1011e4a3:	6a 64                	push   0x64
1011e4a5:	6a 00                	push   0x0
1011e4a7:	83 ec 08             	sub    esp,0x8
1011e4aa:	83 be b4 01 00 00 00 	cmp    DWORD PTR [esi+0x1b4],0x0
1011e4b1:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1011e4b7:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011e4be:	3f 
1011e4bf:	c7 04 24 cd cc 4c 3f 	mov    DWORD PTR [esp],0x3f4ccccd
1011e4c6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011e4c9:	74 07                	je     0x1011e4d2
1011e4cb:	68 f8 d0 1a 10       	push   0x101ad0f8
1011e4d0:	eb 05                	jmp    0x1011e4d7
1011e4d2:	68 18 d1 1a 10       	push   0x101ad118
1011e4d7:	6a 00                	push   0x0
1011e4d9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011e4df:	e8 0c e5 fd ff       	call   0x100fc9f0
1011e4e4:	83 c4 1c             	add    esp,0x1c
1011e4e7:	33 c0                	xor    eax,eax
1011e4e9:	89 86 b4 01 00 00    	mov    DWORD PTR [esi+0x1b4],eax
1011e4ef:	5e                   	pop    esi
1011e4f0:	c3                   	ret
