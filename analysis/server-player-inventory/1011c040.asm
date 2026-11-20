
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011c040 <.text+0x11b040>:
1011c040:	56                   	push   esi
1011c041:	8b f1                	mov    esi,ecx
1011c043:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011c049:	56                   	push   esi
1011c04a:	8b 01                	mov    eax,DWORD PTR [ecx]
1011c04c:	ff 90 84 00 00 00    	call   DWORD PTR [eax+0x84]
1011c052:	83 e8 01             	sub    eax,0x1
1011c055:	75 0b                	jne    0x1011c062
1011c057:	8b 06                	mov    eax,DWORD PTR [esi]
1011c059:	8b ce                	mov    ecx,esi
1011c05b:	5e                   	pop    esi
1011c05c:	ff a0 f0 00 00 00    	jmp    DWORD PTR [eax+0xf0]
1011c062:	5e                   	pop    esi
1011c063:	c3                   	ret
