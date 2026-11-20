
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4120 <.text+0xc3120>:
100c4120:	83 3d 8c 31 22 10 00 	cmp    DWORD PTR ds:0x1022318c,0x0
100c4127:	56                   	push   esi
100c4128:	be e8 03 00 00       	mov    esi,0x3e8
100c412d:	74 10                	je     0x100c413f
100c412f:	68 70 5d 1d 10       	push   0x101d5d70
100c4134:	6a 01                	push   0x1
100c4136:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c413c:	83 c4 08             	add    esp,0x8
100c413f:	a1 90 31 22 10       	mov    eax,ds:0x10223190
100c4144:	c7 05 8c 31 22 10 01 	mov    DWORD PTR ds:0x1022318c,0x1
100c414b:	00 00 00 
100c414e:	85 c0                	test   eax,eax
100c4150:	75 12                	jne    0x100c4164
100c4152:	68 a4 5d 1d 10       	push   0x101d5da4
100c4157:	6a 01                	push   0x1
100c4159:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c415f:	83 c4 08             	add    esp,0x8
100c4162:	5e                   	pop    esi
100c4163:	c3                   	ret
100c4164:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
100c4167:	85 c0                	test   eax,eax
100c4169:	74 35                	je     0x100c41a0
100c416b:	57                   	push   edi
100c416c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c4170:	8b 78 3c             	mov    edi,DWORD PTR [eax+0x3c]
100c4173:	50                   	push   eax
100c4174:	e8 d7 fc ff ff       	call   0x100c3e50
100c4179:	4e                   	dec    esi
100c417a:	83 c4 04             	add    esp,0x4
100c417d:	8b c7                	mov    eax,edi
100c417f:	85 f6                	test   esi,esi
100c4181:	7e 0c                	jle    0x100c418f
100c4183:	85 ff                	test   edi,edi
100c4185:	75 e9                	jne    0x100c4170
100c4187:	5f                   	pop    edi
100c4188:	a3 8c 31 22 10       	mov    ds:0x1022318c,eax
100c418d:	5e                   	pop    esi
100c418e:	c3                   	ret
100c418f:	68 cc 5d 1d 10       	push   0x101d5dcc
100c4194:	6a 04                	push   0x4
100c4196:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c419c:	83 c4 08             	add    esp,0x8
100c419f:	5f                   	pop    edi
100c41a0:	c7 05 8c 31 22 10 00 	mov    DWORD PTR ds:0x1022318c,0x0
100c41a7:	00 00 00 
100c41aa:	5e                   	pop    esi
100c41ab:	c3                   	ret
