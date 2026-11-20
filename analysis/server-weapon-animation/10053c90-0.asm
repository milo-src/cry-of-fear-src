
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053c90 <.text+0x52c90>:
10053c90:	55                   	push   ebp
10053c91:	8b ec                	mov    ebp,esp
10053c93:	51                   	push   ecx
10053c94:	56                   	push   esi
10053c95:	8b f1                	mov    esi,ecx
10053c97:	e8 84 6e 0c 00       	call   0x1011ab20
10053c9c:	f3 0f 10 86 d8 01 00 	movss  xmm0,DWORD PTR [esi+0x1d8]
10053ca3:	00 
10053ca4:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10053ca7:	0f 2f 45 fc          	comiss xmm0,DWORD PTR [ebp-0x4]
10053cab:	0f 87 c5 00 00 00    	ja     0x10053d76
10053cb1:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10053cb8:	0f 85 b8 00 00 00    	jne    0x10053d76
10053cbe:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10053cc4:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
10053ccb:	74 29                	je     0x10053cf6
10053ccd:	80 be 04 02 00 00 00 	cmp    BYTE PTR [esi+0x204],0x0
10053cd4:	0f 85 9c 00 00 00    	jne    0x10053d76
10053cda:	8b 06                	mov    eax,DWORD PTR [esi]
10053cdc:	8b ce                	mov    ecx,esi
10053cde:	6a 00                	push   0x0
10053ce0:	6a 01                	push   0x1
10053ce2:	6a 0e                	push   0xe
10053ce4:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10053cea:	c6 86 04 02 00 00 01 	mov    BYTE PTR [esi+0x204],0x1
10053cf1:	5e                   	pop    esi
10053cf2:	8b e5                	mov    esp,ebp
10053cf4:	5d                   	pop    ebp
10053cf5:	c3                   	ret
10053cf6:	80 be 04 02 00 00 00 	cmp    BYTE PTR [esi+0x204],0x0
10053cfd:	75 77                	jne    0x10053d76
10053cff:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053d04:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
10053d0b:	00 
10053d0c:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
10053d10:	0f 2f c1             	comiss xmm0,xmm1
10053d13:	77 61                	ja     0x10053d76
10053d15:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
10053d1c:	00 
10053d1d:	0f 2f c1             	comiss xmm0,xmm1
10053d20:	77 54                	ja     0x10053d76
10053d22:	83 b9 98 1e 00 00 00 	cmp    DWORD PTR [ecx+0x1e98],0x0
10053d29:	8b ce                	mov    ecx,esi
10053d2b:	8b 06                	mov    eax,DWORD PTR [esi]
10053d2d:	6a 00                	push   0x0
10053d2f:	6a 01                	push   0x1
10053d31:	74 04                	je     0x10053d37
10053d33:	6a 05                	push   0x5
10053d35:	eb 02                	jmp    0x10053d39
10053d37:	6a 00                	push   0x0
10053d39:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10053d3f:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10053d45:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10053d48:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
10053d4e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10053d51:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10053d57:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
10053d5d:	83 c4 04             	add    esp,0x4
10053d60:	50                   	push   eax
10053d61:	e8 2a b6 fb ff       	call   0x1000f390
10053d66:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053d6b:	83 c4 08             	add    esp,0x8
10053d6e:	d8 00                	fadd   DWORD PTR [eax]
10053d70:	d9 9e d8 01 00 00    	fstp   DWORD PTR [esi+0x1d8]
10053d76:	5e                   	pop    esi
10053d77:	8b e5                	mov    esp,ebp
10053d79:	5d                   	pop    ebp
10053d7a:	c3                   	ret
