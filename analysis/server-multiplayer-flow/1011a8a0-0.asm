
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a8a0 <.text+0x1198a0>:
1011a8a0:	55                   	push   ebp
1011a8a1:	8b ec                	mov    ebp,esp
1011a8a3:	8d 45 0c             	lea    eax,[ebp+0xc]
1011a8a6:	50                   	push   eax
1011a8a7:	6a 00                	push   0x0
1011a8a9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011a8ac:	6a ff                	push   0xffffffff
1011a8ae:	68 88 10 23 10       	push   0x10231088
1011a8b3:	e8 d8 6e ee ff       	call   0x10001790
1011a8b8:	8b 08                	mov    ecx,DWORD PTR [eax]
1011a8ba:	ff 70 04             	push   DWORD PTR [eax+0x4]
1011a8bd:	83 c9 01             	or     ecx,0x1
1011a8c0:	51                   	push   ecx
1011a8c1:	e8 9b 26 04 00       	call   0x1015cf61
1011a8c6:	83 c4 1c             	add    esp,0x1c
1011a8c9:	b8 88 10 23 10       	mov    eax,0x10231088
1011a8ce:	5d                   	pop    ebp
1011a8cf:	c3                   	ret
