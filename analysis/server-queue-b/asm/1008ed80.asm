
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ed80 <.text+0x8dd80>:
1008ed80:	56                   	push   esi
1008ed81:	8b f1                	mov    esi,ecx
1008ed83:	8b 06                	mov    eax,DWORD PTR [esi]
1008ed85:	ff 50 30             	call   DWORD PTR [eax+0x30]
1008ed88:	ff 76 04             	push   DWORD PTR [esi+0x4]
1008ed8b:	e8 f0 3d 07 00       	call   0x10102b80
1008ed90:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008ed93:	83 c4 04             	add    esp,0x4
1008ed96:	83 b9 10 01 00 00 00 	cmp    DWORD PTR [ecx+0x110],0x0
1008ed9d:	75 15                	jne    0x1008edb4
1008ed9f:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
1008eda5:	d1 e8                	shr    eax,1
1008eda7:	f7 d0                	not    eax
1008eda9:	83 e0 04             	and    eax,0x4
1008edac:	89 81 0c 01 00 00    	mov    DWORD PTR [ecx+0x10c],eax
1008edb2:	eb 17                	jmp    0x1008edcb
1008edb4:	c7 81 0c 01 00 00 00 	mov    DWORD PTR [ecx+0x10c],0x0
1008edbb:	00 00 00 
1008edbe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008edc1:	81 88 a4 01 00 00 00 	or     DWORD PTR [eax+0x1a4],0x80000000
1008edc8:	00 00 80 
1008edcb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008edce:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
1008edd5:	00 00 00 
1008edd8:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008eddb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008ede0:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
1008ede6:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008edec:	51                   	push   ecx
1008eded:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008edf3:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1008edf9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008edfc:	83 c0 08             	add    eax,0x8
1008edff:	50                   	push   eax
1008ee00:	56                   	push   esi
1008ee01:	e8 da b1 08 00       	call   0x10119fe0
1008ee06:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008ee09:	83 c4 10             	add    esp,0x10
1008ee0c:	f3 0f 10 81 fc 01 00 	movss  xmm0,DWORD PTR [ecx+0x1fc]
1008ee13:	00 
1008ee14:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1008ee1b:	9f                   	lahf
1008ee1c:	f6 c4 44             	test   ah,0x44
1008ee1f:	7a 0d                	jp     0x1008ee2e
1008ee21:	c7 81 fc 01 00 00 00 	mov    DWORD PTR [ecx+0x1fc],0x42c80000
1008ee28:	00 c8 42 
1008ee2b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008ee2e:	c7 86 00 01 00 00 01 	mov    DWORD PTR [esi+0x100],0x1
1008ee35:	00 00 00 
1008ee38:	ba 20 da 08 10       	mov    edx,0x1008da20
1008ee3d:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
1008ee43:	33 c9                	xor    ecx,ecx
1008ee45:	25 00 05 00 00       	and    eax,0x500
1008ee4a:	3d 00 01 00 00       	cmp    eax,0x100
1008ee4f:	0f 45 ca             	cmovne ecx,edx
1008ee52:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
1008ee55:	5e                   	pop    esi
1008ee56:	c3                   	ret
