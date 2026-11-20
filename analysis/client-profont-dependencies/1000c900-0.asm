
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1000c900 <.text+0xb900>:
1000c900:	55                   	push   ebp
1000c901:	8b ec                	mov    ebp,esp
1000c903:	8d 45 10             	lea    eax,[ebp+0x10]
1000c906:	50                   	push   eax
1000c907:	6a 00                	push   0x0
1000c909:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000c90c:	6a ff                	push   0xffffffff
1000c90e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000c911:	e8 2a a5 ff ff       	call   0x10006e40
1000c916:	8b 08                	mov    ecx,DWORD PTR [eax]
1000c918:	ff 70 04             	push   DWORD PTR [eax+0x4]
1000c91b:	83 c9 01             	or     ecx,0x1
1000c91e:	51                   	push   ecx
1000c91f:	e8 2d 32 0e 00       	call   0x100efb51
1000c924:	83 c9 ff             	or     ecx,0xffffffff
1000c927:	83 c4 1c             	add    esp,0x1c
1000c92a:	85 c0                	test   eax,eax
1000c92c:	0f 48 c1             	cmovs  eax,ecx
1000c92f:	5d                   	pop    ebp
1000c930:	c3                   	ret
