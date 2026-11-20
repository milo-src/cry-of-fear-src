
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10015a20 <.text+0x14a20>:
10015a20:	56                   	push   esi
10015a21:	57                   	push   edi
10015a22:	68 30 21 1a 10       	push   0x101a2130
10015a27:	6a 00                	push   0x0
10015a29:	8b f1                	mov    esi,ecx
10015a2b:	e8 30 2a 10 00       	call   0x10118460
10015a30:	8b f8                	mov    edi,eax
10015a32:	83 c4 08             	add    esp,0x8
10015a35:	85 ff                	test   edi,edi
10015a37:	0f 84 b7 01 00 00    	je     0x10015bf4
10015a3d:	83 be 8c 01 00 00 00 	cmp    DWORD PTR [esi+0x18c],0x0
10015a44:	0f 84 15 01 00 00    	je     0x10015b5f
10015a4a:	80 be 80 01 00 00 00 	cmp    BYTE PTR [esi+0x180],0x0
10015a51:	0f 84 08 01 00 00    	je     0x10015b5f
10015a57:	8b 8e 9c 01 00 00    	mov    ecx,DWORD PTR [esi+0x19c]
10015a5d:	c6 86 80 01 00 00 00 	mov    BYTE PTR [esi+0x180],0x0
10015a64:	85 c9                	test   ecx,ecx
10015a66:	74 1b                	je     0x10015a83
10015a68:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015a6d:	6a 00                	push   0x0
10015a6f:	6a 05                	push   0x5
10015a71:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10015a77:	03 c1                	add    eax,ecx
10015a79:	50                   	push   eax
10015a7a:	57                   	push   edi
10015a7b:	e8 90 3d 10 00       	call   0x10119810
10015a80:	83 c4 10             	add    esp,0x10
10015a83:	83 be 98 01 00 00 00 	cmp    DWORD PTR [esi+0x198],0x0
10015a8a:	74 47                	je     0x10015ad3
10015a8c:	ff 77 04             	push   DWORD PTR [edi+0x4]
10015a8f:	e8 4c cb ff ff       	call   0x100125e0
10015a94:	83 c4 04             	add    esp,0x4
10015a97:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10015a9a:	6a 64                	push   0x64
10015a9c:	6a 00                	push   0x0
10015a9e:	83 ec 08             	sub    esp,0x8
10015aa1:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10015aa7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015aac:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10015ab3:	3f 
10015ab4:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10015abb:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10015ac1:	03 86 98 01 00 00    	add    eax,DWORD PTR [esi+0x198]
10015ac7:	50                   	push   eax
10015ac8:	6a 00                	push   0x0
10015aca:	51                   	push   ecx
10015acb:	e8 20 6f 0e 00       	call   0x100fc9f0
10015ad0:	83 c4 1c             	add    esp,0x1c
10015ad3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10015ad6:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x800
10015add:	08 00 00 
10015ae0:	74 29                	je     0x10015b0b
10015ae2:	51                   	push   ecx
10015ae3:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015aea:	8b ce                	mov    ecx,esi
10015aec:	6a 03                	push   0x3
10015aee:	57                   	push   edi
10015aef:	57                   	push   edi
10015af0:	c7 86 88 01 00 00 00 	mov    DWORD PTR [esi+0x188],0x0
10015af7:	00 00 00 
10015afa:	c7 86 84 01 00 00 00 	mov    DWORD PTR [esi+0x184],0x0
10015b01:	00 00 00 
10015b04:	e8 87 d5 ff ff       	call   0x10013090
10015b09:	eb 21                	jmp    0x10015b2c
10015b0b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015b10:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10015b14:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10015b1b:	10 
10015b1c:	f3 0f 11 86 88 01 00 	movss  DWORD PTR [esi+0x188],xmm0
10015b23:	00 
10015b24:	f3 0f 11 86 84 01 00 	movss  DWORD PTR [esi+0x184],xmm0
10015b2b:	00 
10015b2c:	8b 8e a4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1a4]
10015b32:	85 c9                	test   ecx,ecx
10015b34:	0f 84 ba 00 00 00    	je     0x10015bf4
10015b3a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015b3f:	51                   	push   ecx
10015b40:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10015b47:	6a 03                	push   0x3
10015b49:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10015b4f:	56                   	push   esi
10015b50:	03 c1                	add    eax,ecx
10015b52:	56                   	push   esi
10015b53:	50                   	push   eax
10015b54:	e8 97 c4 0e 00       	call   0x10101ff0
10015b59:	83 c4 14             	add    esp,0x14
10015b5c:	5f                   	pop    edi
10015b5d:	5e                   	pop    esi
10015b5e:	c3                   	ret
10015b5f:	8b 8e 90 01 00 00    	mov    ecx,DWORD PTR [esi+0x190]
10015b65:	85 c9                	test   ecx,ecx
10015b67:	74 1b                	je     0x10015b84
10015b69:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015b6e:	6a 00                	push   0x0
10015b70:	6a 05                	push   0x5
10015b72:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10015b78:	03 c1                	add    eax,ecx
10015b7a:	50                   	push   eax
10015b7b:	57                   	push   edi
10015b7c:	e8 8f 3c 10 00       	call   0x10119810
10015b81:	83 c4 10             	add    esp,0x10
10015b84:	83 be 94 01 00 00 00 	cmp    DWORD PTR [esi+0x194],0x0
10015b8b:	74 47                	je     0x10015bd4
10015b8d:	ff 77 04             	push   DWORD PTR [edi+0x4]
10015b90:	e8 4b ca ff ff       	call   0x100125e0
10015b95:	83 c4 04             	add    esp,0x4
10015b98:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10015b9b:	6a 64                	push   0x64
10015b9d:	6a 00                	push   0x0
10015b9f:	83 ec 08             	sub    esp,0x8
10015ba2:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10015ba8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015bad:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10015bb4:	3f 
10015bb5:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10015bbc:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10015bc2:	03 86 94 01 00 00    	add    eax,DWORD PTR [esi+0x194]
10015bc8:	50                   	push   eax
10015bc9:	6a 00                	push   0x0
10015bcb:	51                   	push   ecx
10015bcc:	e8 1f 6e 0e 00       	call   0x100fc9f0
10015bd1:	83 c4 1c             	add    esp,0x1c
10015bd4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015bd9:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10015bdd:	0f 5a c0             	cvtps2pd xmm0,xmm0
10015be0:	f2 0f 58 05 60 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e60
10015be7:	10 
10015be8:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10015bec:	f3 0f 11 86 88 01 00 	movss  DWORD PTR [esi+0x188],xmm0
10015bf3:	00 
10015bf4:	5f                   	pop    edi
10015bf5:	5e                   	pop    esi
10015bf6:	c3                   	ret
