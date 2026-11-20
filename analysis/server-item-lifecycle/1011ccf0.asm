
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011ccf0 <.text+0x11bcf0>:
1011ccf0:	56                   	push   esi
1011ccf1:	8b f1                	mov    esi,ecx
1011ccf3:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1011ccf9:	85 c9                	test   ecx,ecx
1011ccfb:	74 09                	je     0x1011cd06
1011ccfd:	8b 01                	mov    eax,DWORD PTR [ecx]
1011ccff:	56                   	push   esi
1011cd00:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
1011cd06:	8b 06                	mov    eax,DWORD PTR [esi]
1011cd08:	8b ce                	mov    ecx,esi
1011cd0a:	5e                   	pop    esi
1011cd0b:	ff a0 60 01 00 00    	jmp    DWORD PTR [eax+0x160]
