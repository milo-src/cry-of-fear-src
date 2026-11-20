
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102be0 <.text+0x101be0>:
10102be0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10102be3:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
10102bea:	74 08                	je     0x10102bf4
10102bec:	8b 90 d4 01 00 00    	mov    edx,DWORD PTR [eax+0x1d4]
10102bf2:	eb 06                	jmp    0x10102bfa
10102bf4:	8b 90 cc 01 00 00    	mov    edx,DWORD PTR [eax+0x1cc]
10102bfa:	89 51 18             	mov    DWORD PTR [ecx+0x18],edx
10102bfd:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
10102c04:	74 17                	je     0x10102c1d
10102c06:	c7 80 0c 01 00 00 03 	mov    DWORD PTR [eax+0x10c],0x3
10102c0d:	00 00 00 
10102c10:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10102c13:	c7 80 08 01 00 00 05 	mov    DWORD PTR [eax+0x108],0x5
10102c1a:	00 00 00 
10102c1d:	c3                   	ret
