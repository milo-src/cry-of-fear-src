
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101ba0 <.text+0x100ba0>:
10101ba0:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
10101ba7:	10 
10101ba8:	56                   	push   esi
10101ba9:	83 ec 0c             	sub    esp,0xc
10101bac:	8b f1                	mov    esi,ecx
10101bae:	8b c4                	mov    eax,esp
10101bb0:	56                   	push   esi
10101bb1:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10101bb5:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
10101bbc:	10 
10101bbd:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10101bc2:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
10101bc9:	10 
10101bca:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10101bcf:	e8 bc 2f fc ff       	call   0x100c4b90
10101bd4:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
10101bd7:	83 c4 10             	add    esp,0x10
10101bda:	83 ec 0c             	sub    esp,0xc
10101bdd:	8b cc                	mov    ecx,esp
10101bdf:	56                   	push   esi
10101be0:	85 c0                	test   eax,eax
10101be2:	74 3a                	je     0x10101c1e
10101be4:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10101be7:	f3 0f 10 50 54       	movss  xmm2,DWORD PTR [eax+0x54]
10101bec:	f3 0f 10 48 58       	movss  xmm1,DWORD PTR [eax+0x58]
10101bf1:	f3 0f 10 40 50       	movss  xmm0,DWORD PTR [eax+0x50]
10101bf6:	f3 0f 58 96 70 01 00 	addss  xmm2,DWORD PTR [esi+0x170]
10101bfd:	00 
10101bfe:	f3 0f 58 8e 74 01 00 	addss  xmm1,DWORD PTR [esi+0x174]
10101c05:	00 
10101c06:	f3 0f 58 86 6c 01 00 	addss  xmm0,DWORD PTR [esi+0x16c]
10101c0d:	00 
10101c0e:	f3 0f 11 51 04       	movss  DWORD PTR [ecx+0x4],xmm2
10101c13:	f3 0f 11 49 08       	movss  DWORD PTR [ecx+0x8],xmm1
10101c18:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
10101c1c:	eb 1a                	jmp    0x10101c38
10101c1e:	8b 86 6c 01 00 00    	mov    eax,DWORD PTR [esi+0x16c]
10101c24:	89 01                	mov    DWORD PTR [ecx],eax
10101c26:	8b 86 70 01 00 00    	mov    eax,DWORD PTR [esi+0x170]
10101c2c:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10101c2f:	8b 86 74 01 00 00    	mov    eax,DWORD PTR [esi+0x174]
10101c35:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10101c38:	e8 a3 2c fc ff       	call   0x100c48e0
10101c3d:	83 c4 10             	add    esp,0x10
10101c40:	8b ce                	mov    ecx,esi
10101c42:	e8 89 5e f1 ff       	call   0x10017ad0
10101c47:	8b 86 54 01 00 00    	mov    eax,DWORD PTR [esi+0x154]
10101c4d:	85 c0                	test   eax,eax
10101c4f:	74 05                	je     0x10101c56
10101c51:	8b ce                	mov    ecx,esi
10101c53:	5e                   	pop    esi
10101c54:	ff e0                	jmp    eax
10101c56:	5e                   	pop    esi
10101c57:	c3                   	ret
