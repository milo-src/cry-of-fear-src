
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10071c50 <.text+0x70c50>:
10071c50:	55                   	push   ebp
10071c51:	8b ec                	mov    ebp,esp
10071c53:	56                   	push   esi
10071c54:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10071c57:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10071c5a:	e8 f1 eb 00 00       	call   0x10080850
10071c5f:	83 c4 08             	add    esp,0x8
10071c62:	e8 49 ec 00 00       	call   0x100808b0
10071c67:	8b f0                	mov    esi,eax
10071c69:	ff 15 d8 26 1b 10    	call   DWORD PTR ds:0x101b26d8
10071c6f:	85 c0                	test   eax,eax
10071c71:	74 06                	je     0x10071c79
10071c73:	89 b0 14 03 00 00    	mov    DWORD PTR [eax+0x314],esi
10071c79:	b8 01 00 00 00       	mov    eax,0x1
10071c7e:	5e                   	pop    esi
10071c7f:	5d                   	pop    ebp
10071c80:	c3                   	ret
