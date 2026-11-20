
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f5db0 <.text+0xf4db0>:
100f5db0:	56                   	push   esi
100f5db1:	8b f1                	mov    esi,ecx
100f5db3:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f5db9:	85 c9                	test   ecx,ecx
100f5dbb:	74 1c                	je     0x100f5dd9
100f5dbd:	8b 01                	mov    eax,DWORD PTR [ecx]
100f5dbf:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f5dc2:	85 c0                	test   eax,eax
100f5dc4:	74 13                	je     0x100f5dd9
100f5dc6:	6a 05                	push   0x5
100f5dc8:	6a 00                	push   0x0
100f5dca:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f5dd0:	8b 0c 85 30 7f 21 10 	mov    ecx,DWORD PTR [eax*4+0x10217f30]
100f5dd7:	eb 38                	jmp    0x100f5e11
100f5dd9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f5ddc:	6a 09                	push   0x9
100f5dde:	6a 00                	push   0x0
100f5de0:	f3 0f 10 80 68 02 00 	movss  xmm0,DWORD PTR [eax+0x268]
100f5de7:	00 
100f5de8:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100f5def:	9f                   	lahf
100f5df0:	f6 c4 44             	test   ah,0x44
100f5df3:	7b 0f                	jnp    0x100f5e04
100f5df5:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f5dfb:	8b 0c 85 8c 7f 21 10 	mov    ecx,DWORD PTR [eax*4+0x10217f8c]
100f5e02:	eb 0d                	jmp    0x100f5e11
100f5e04:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100f5e0a:	8b 0c 85 b8 7e 21 10 	mov    ecx,DWORD PTR [eax*4+0x10217eb8]
100f5e11:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f5e14:	83 c4 08             	add    esp,0x8
100f5e17:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f5e1d:	6a 64                	push   0x64
100f5e1f:	6a 00                	push   0x0
100f5e21:	83 ec 08             	sub    esp,0x8
100f5e24:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100f5e2b:	3f 
100f5e2c:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f5e33:	51                   	push   ecx
100f5e34:	6a 02                	push   0x2
100f5e36:	50                   	push   eax
100f5e37:	e8 b4 6b 00 00       	call   0x100fc9f0
100f5e3c:	83 c4 1c             	add    esp,0x1c
100f5e3f:	5e                   	pop    esi
100f5e40:	c3                   	ret
