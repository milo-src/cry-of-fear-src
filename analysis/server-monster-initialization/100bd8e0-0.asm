
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bd8e0 <.text+0xbc8e0>:
100bd8e0:	56                   	push   esi
100bd8e1:	8b f1                	mov    esi,ecx
100bd8e3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bd8e6:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
100bd8ed:	02 00 00 
100bd8f0:	74 1e                	je     0x100bd910
100bd8f2:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
100bd8f9:	e8 e2 12 f5 ff       	call   0x1000ebe0
100bd8fe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bd901:	83 c0 08             	add    eax,0x8
100bd904:	50                   	push   eax
100bd905:	56                   	push   esi
100bd906:	e8 d5 c6 05 00       	call   0x10119fe0
100bd90b:	83 c4 08             	add    esp,0x8
100bd90e:	5e                   	pop    esi
100bd90f:	c3                   	ret
100bd910:	8b 06                	mov    eax,DWORD PTR [esi]
100bd912:	51                   	push   ecx
100bd913:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100bd91a:	ff 50 08             	call   DWORD PTR [eax+0x8]
100bd91d:	5e                   	pop    esi
100bd91e:	c3                   	ret
