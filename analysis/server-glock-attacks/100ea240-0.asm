
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ea240 <.text+0xe9240>:
100ea240:	55                   	push   ebp
100ea241:	8b ec                	mov    ebp,esp
100ea243:	56                   	push   esi
100ea244:	57                   	push   edi
100ea245:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100ea248:	8b f1                	mov    esi,ecx
100ea24a:	e8 61 47 f2 ff       	call   0x1000e9b0
100ea24f:	8b f8                	mov    edi,eax
100ea251:	83 ff ff             	cmp    edi,0xffffffff
100ea254:	0f 84 a4 00 00 00    	je     0x100ea2fe
100ea25a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ea25d:	39 b8 2c 01 00 00    	cmp    DWORD PTR [eax+0x12c],edi
100ea263:	75 09                	jne    0x100ea26e
100ea265:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100ea26c:	75 0a                	jne    0x100ea278
100ea26e:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100ea275:	00 00 00 
100ea278:	80 7d 0c 00          	cmp    BYTE PTR [ebp+0xc],0x0
100ea27c:	74 32                	je     0x100ea2b0
100ea27e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ea281:	57                   	push   edi
100ea282:	89 b8 30 01 00 00    	mov    DWORD PTR [eax+0x130],edi
100ea288:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ea28b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ea291:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100ea297:	83 c4 04             	add    esp,0x4
100ea29a:	50                   	push   eax
100ea29b:	e8 f0 50 f2 ff       	call   0x1000f390
100ea2a0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ea2a5:	83 c4 08             	add    esp,0x8
100ea2a8:	d8 00                	fadd   DWORD PTR [eax]
100ea2aa:	d9 9e 04 05 00 00    	fstp   DWORD PTR [esi+0x504]
100ea2b0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ea2b3:	57                   	push   edi
100ea2b4:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ea2ba:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100ea2c0:	83 c4 04             	add    esp,0x4
100ea2c3:	50                   	push   eax
100ea2c4:	e8 c7 50 f2 ff       	call   0x1000f390
100ea2c9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ea2ce:	83 c4 08             	add    esp,0x8
100ea2d1:	d8 00                	fadd   DWORD PTR [eax]
100ea2d3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ea2d6:	d9 9e f4 04 00 00    	fstp   DWORD PTR [esi+0x4f4]
100ea2dc:	39 b8 2c 01 00 00    	cmp    DWORD PTR [eax+0x12c],edi
100ea2e2:	74 1a                	je     0x100ea2fe
100ea2e4:	89 b8 2c 01 00 00    	mov    DWORD PTR [eax+0x12c],edi
100ea2ea:	8b ce                	mov    ecx,esi
100ea2ec:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ea2ef:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100ea2f6:	00 00 00 
100ea2f9:	e8 e2 46 f2 ff       	call   0x1000e9e0
100ea2fe:	5f                   	pop    edi
100ea2ff:	5e                   	pop    esi
100ea300:	5d                   	pop    ebp
100ea301:	c2 08 00             	ret    0x8
