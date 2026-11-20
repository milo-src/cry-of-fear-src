
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1150 <.text+0xc0150>:
100c1150:	56                   	push   esi
100c1151:	8b f1                	mov    esi,ecx
100c1153:	8b 86 2c 02 00 00    	mov    eax,DWORD PTR [esi+0x22c]
100c1159:	83 f8 03             	cmp    eax,0x3
100c115c:	77 4f                	ja     0x100c11ad
100c115e:	ff 24 85 bc 11 0c 10 	jmp    DWORD PTR [eax*4+0x100c11bc]
100c1165:	c7 86 2c 02 00 00 03 	mov    DWORD PTR [esi+0x22c],0x3
100c116c:	00 00 00 
100c116f:	c7 86 b8 02 00 00 00 	mov    DWORD PTR [esi+0x2b8],0x0
100c1176:	00 00 00 
100c1179:	5e                   	pop    esi
100c117a:	c3                   	ret
100c117b:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x40000000
100c1182:	00 00 40 
100c1185:	75 26                	jne    0x100c11ad
100c1187:	c7 86 2c 02 00 00 04 	mov    DWORD PTR [esi+0x22c],0x4
100c118e:	00 00 00 
100c1191:	c7 86 b8 02 00 00 00 	mov    DWORD PTR [esi+0x2b8],0x0
100c1198:	00 00 00 
100c119b:	5e                   	pop    esi
100c119c:	c3                   	ret
100c119d:	68 68 4f 1d 10       	push   0x101d4f68
100c11a2:	6a 04                	push   0x4
100c11a4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c11aa:	83 c4 08             	add    esp,0x8
100c11ad:	c7 86 b8 02 00 00 00 	mov    DWORD PTR [esi+0x2b8],0x0
100c11b4:	00 00 00 
100c11b7:	5e                   	pop    esi
100c11b8:	c3                   	ret
