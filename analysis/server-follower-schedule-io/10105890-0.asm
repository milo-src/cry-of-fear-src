
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105890 <.text+0x104890>:
10105890:	55                   	push   ebp
10105891:	8b ec                	mov    ebp,esp
10105893:	56                   	push   esi
10105894:	8b f1                	mov    esi,ecx
10105896:	83 be 4c 03 00 00 00 	cmp    DWORD PTR [esi+0x34c],0x0
1010589d:	75 0a                	jne    0x101058a9
1010589f:	68 44 9d 21 10       	push   0x10219d44
101058a4:	e8 a7 51 f0 ff       	call   0x1000aa50
101058a9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
101058ac:	8d 8e e0 03 00 00    	lea    ecx,[esi+0x3e0]
101058b2:	e8 89 1e f1 ff       	call   0x10017740
101058b7:	5e                   	pop    esi
101058b8:	5d                   	pop    ebp
101058b9:	c2 04 00             	ret    0x4
