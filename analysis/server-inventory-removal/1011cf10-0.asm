
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011cf10 <.text+0x11bf10>:
1011cf10:	56                   	push   esi
1011cf11:	8b f1                	mov    esi,ecx
1011cf13:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1011cf16:	c7 86 80 00 00 00 00 	mov    DWORD PTR [esi+0x80],0x0
1011cf1d:	00 00 00 
1011cf20:	85 c9                	test   ecx,ecx
1011cf22:	74 0a                	je     0x1011cf2e
1011cf24:	8b 01                	mov    eax,DWORD PTR [ecx]
1011cf26:	ff 50 40             	call   DWORD PTR [eax+0x40]
1011cf29:	83 e0 02             	and    eax,0x2
1011cf2c:	eb 05                	jmp    0x1011cf33
1011cf2e:	b8 02 00 00 00       	mov    eax,0x2
1011cf33:	89 86 08 01 00 00    	mov    DWORD PTR [esi+0x108],eax
1011cf39:	8b 06                	mov    eax,DWORD PTR [esi]
1011cf3b:	51                   	push   ecx
1011cf3c:	8b ce                	mov    ecx,esi
1011cf3e:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
1011cf45:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1011cf4c:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1011cf53:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011cf56:	5e                   	pop    esi
1011cf57:	c3                   	ret
