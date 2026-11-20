
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10045b40 <.text+0x44b40>:
10045b40:	55                   	push   ebp
10045b41:	8b ec                	mov    ebp,esp
10045b43:	83 ec 0c             	sub    esp,0xc
10045b46:	56                   	push   esi
10045b47:	8b f1                	mov    esi,ecx
10045b49:	6a 00                	push   0x0
10045b4b:	6a 01                	push   0x1
10045b4d:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10045b54:	8b 06                	mov    eax,DWORD PTR [esi]
10045b56:	74 04                	je     0x10045b5c
10045b58:	6a 08                	push   0x8
10045b5a:	eb 02                	jmp    0x10045b5e
10045b5c:	6a 09                	push   0x9
10045b5e:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10045b64:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10045b6b:	0f 84 83 00 00 00    	je     0x10045bf4
10045b71:	6a 00                	push   0x0
10045b73:	68 ff 00 00 00       	push   0xff
10045b78:	83 ec 08             	sub    esp,0x8
10045b7b:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
10045b82:	8d 45 f4             	lea    eax,[ebp-0xc]
10045b85:	c7 86 48 01 00 00 00 	mov    DWORD PTR [esi+0x148],0x0
10045b8c:	00 00 00 
10045b8f:	c7 86 40 01 00 00 00 	mov    DWORD PTR [esi+0x140],0x0
10045b96:	00 00 00 
10045b99:	c7 45 f4 00 00 00 43 	mov    DWORD PTR [ebp-0xc],0x43000000
10045ba0:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
10045ba7:	00 
10045ba8:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
10045baf:	50                   	push   eax
10045bb0:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
10045bb6:	c7 45 f8 00 00 00 43 	mov    DWORD PTR [ebp-0x8],0x43000000
10045bbd:	c7 45 fc 00 00 00 43 	mov    DWORD PTR [ebp-0x4],0x43000000
10045bc4:	e8 37 40 0d 00       	call   0x10119c00
10045bc9:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10045bcf:	83 c4 18             	add    esp,0x18
10045bd2:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10045bd5:	f3 0f 10 81 60 02 00 	movss  xmm0,DWORD PTR [ecx+0x260]
10045bdc:	00 
10045bdd:	0f 2e 05 e0 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1ee0
10045be4:	9f                   	lahf
10045be5:	f6 c4 44             	test   ah,0x44
10045be8:	7a 0a                	jp     0x10045bf4
10045bea:	c7 81 60 02 00 00 00 	mov    DWORD PTR [ecx+0x260],0x0
10045bf1:	00 00 00 
10045bf4:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045bfa:	8b 81 d0 05 00 00    	mov    eax,DWORD PTR [ecx+0x5d0]
10045c00:	a8 04                	test   al,0x4
10045c02:	74 0f                	je     0x10045c13
10045c04:	83 e0 fb             	and    eax,0xfffffffb
10045c07:	89 81 d0 05 00 00    	mov    DWORD PTR [ecx+0x5d0],eax
10045c0d:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045c13:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045c18:	5e                   	pop    esi
10045c19:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10045c1d:	0f 5a c0             	cvtps2pd xmm0,xmm0
10045c20:	f2 0f 58 05 48 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e48
10045c27:	10 
10045c28:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10045c2c:	f3 0f 11 81 08 03 00 	movss  DWORD PTR [ecx+0x308],xmm0
10045c33:	00 
10045c34:	8b e5                	mov    esp,ebp
10045c36:	5d                   	pop    ebp
10045c37:	c3                   	ret
