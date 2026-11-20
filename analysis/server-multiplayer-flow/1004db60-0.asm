
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004db60 <.text+0x4cb60>:
1004db60:	55                   	push   ebp
1004db61:	8b ec                	mov    ebp,esp
1004db63:	8d 45 14             	lea    eax,[ebp+0x14]
1004db66:	50                   	push   eax
1004db67:	6a 00                	push   0x0
1004db69:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1004db6c:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1004db6f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1004db72:	e8 19 3c fb ff       	call   0x10001790
1004db77:	ff 70 04             	push   DWORD PTR [eax+0x4]
1004db7a:	ff 30                	push   DWORD PTR [eax]
1004db7c:	e8 28 f4 10 00       	call   0x1015cfa9
1004db81:	83 c9 ff             	or     ecx,0xffffffff
1004db84:	83 c4 1c             	add    esp,0x1c
1004db87:	85 c0                	test   eax,eax
1004db89:	0f 48 c1             	cmovs  eax,ecx
1004db8c:	5d                   	pop    ebp
1004db8d:	c3                   	ret
