
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001fd20 <.text+0x1ed20>:
1001fd20:	8b 49 14             	mov    ecx,DWORD PTR [ecx+0x14]
1001fd23:	85 c9                	test   ecx,ecx
1001fd25:	74 0c                	je     0x1001fd33
1001fd27:	8b 01                	mov    eax,DWORD PTR [ecx]
1001fd29:	ff 50 40             	call   DWORD PTR [eax+0x40]
1001fd2c:	83 e0 02             	and    eax,0x2
1001fd2f:	83 c8 08             	or     eax,0x8
1001fd32:	c3                   	ret
1001fd33:	b8 02 00 00 00       	mov    eax,0x2
1001fd38:	83 c8 08             	or     eax,0x8
1001fd3b:	c3                   	ret
