
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dd9f0 <.text+0xdc9f0>:
100dd9f0:	6a 00                	push   0x0
100dd9f2:	6a 00                	push   0x0
100dd9f4:	53                   	push   ebx
100dd9f5:	8b cf                	mov    ecx,edi
100dd9f7:	c7 46 e4 00 00 00 00 	mov    DWORD PTR [esi-0x1c],0x0
100dd9fe:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
100dda04:	c7 46 1c 00 00 00 00 	mov    DWORD PTR [esi+0x1c],0x0
100dda0b:	c7 46 38 00 00 00 00 	mov    DWORD PTR [esi+0x38],0x0
100dda12:	e8 49 69 00 00       	call   0x100e4360
100dda17:	43                   	inc    ebx
100dda18:	8d 76 04             	lea    esi,[esi+0x4]
100dda1b:	83 fb 06             	cmp    ebx,0x6
100dda1e:	7e d0                	jle    0x100dd9f0
100dda20:	5e                   	pop    esi
100dda21:	5b                   	pop    ebx
100dda22:	5f                   	pop    edi
100dda23:	5d                   	pop    ebp
100dda24:	c2 08 00             	ret    0x8
100dda27:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100dda2a:	6a 00                	push   0x0
100dda2c:	6a 00                	push   0x0
100dda2e:	50                   	push   eax
100dda2f:	c7 84 87 fc 21 00 00 	mov    DWORD PTR [edi+eax*4+0x21fc],0x0
100dda36:	00 00 00 00 
100dda3a:	c7 84 87 18 22 00 00 	mov    DWORD PTR [edi+eax*4+0x2218],0x0
100dda41:	00 00 00 00 
100dda45:	c7 84 87 34 22 00 00 	mov    DWORD PTR [edi+eax*4+0x2234],0x0
100dda4c:	00 00 00 00 
100dda50:	c7 84 87 50 22 00 00 	mov    DWORD PTR [edi+eax*4+0x2250],0x0
100dda57:	00 00 00 00 
100dda5b:	e8 00 69 00 00       	call   0x100e4360
100dda60:	5f                   	pop    edi
100dda61:	5d                   	pop    ebp
100dda62:	c2 08 00             	ret    0x8
