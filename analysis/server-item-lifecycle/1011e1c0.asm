
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011e1c0 <.text+0x11d1c0>:
1011e1c0:	56                   	push   esi
1011e1c1:	8b f1                	mov    esi,ecx
1011e1c3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e1c6:	8b 88 18 01 00 00    	mov    ecx,DWORD PTR [eax+0x118]
1011e1cc:	84 c9                	test   cl,cl
1011e1ce:	79 19                	jns    0x1011e1e9
1011e1d0:	81 e1 7f ff ff ff    	and    ecx,0xffffff7f
1011e1d6:	89 88 18 01 00 00    	mov    DWORD PTR [eax+0x118],ecx
1011e1dc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e1df:	83 88 18 01 00 00 02 	or     DWORD PTR [eax+0x118],0x2
1011e1e6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e1e9:	c7 80 0c 01 00 00 01 	mov    DWORD PTR [eax+0x10c],0x1
1011e1f0:	00 00 00 
1011e1f3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e1f6:	83 c0 08             	add    eax,0x8
1011e1f9:	50                   	push   eax
1011e1fa:	56                   	push   esi
1011e1fb:	e8 e0 bd ff ff       	call   0x10119fe0
1011e200:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
1011e203:	83 c4 08             	add    esp,0x8
1011e206:	c7 86 80 00 00 00 c0 	mov    DWORD PTR [esi+0x80],0x10017ac0
1011e20d:	7a 01 10 
1011e210:	85 c9                	test   ecx,ecx
1011e212:	74 0a                	je     0x1011e21e
1011e214:	8b 01                	mov    eax,DWORD PTR [ecx]
1011e216:	ff 50 40             	call   DWORD PTR [eax+0x40]
1011e219:	83 e0 02             	and    eax,0x2
1011e21c:	eb 05                	jmp    0x1011e223
1011e21e:	b8 02 00 00 00       	mov    eax,0x2
1011e223:	83 c8 08             	or     eax,0x8
1011e226:	89 86 08 01 00 00    	mov    DWORD PTR [esi+0x108],eax
1011e22c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011e22f:	83 b8 54 02 00 00 01 	cmp    DWORD PTR [eax+0x254],0x1
1011e236:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
1011e23d:	75 07                	jne    0x1011e246
1011e23f:	c7 46 7c d0 c7 11 10 	mov    DWORD PTR [esi+0x7c],0x1011c7d0
1011e246:	5e                   	pop    esi
1011e247:	c3                   	ret
