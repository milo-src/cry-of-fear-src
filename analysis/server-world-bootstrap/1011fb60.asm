
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011fb60 <.text+0x11eb60>:
1011fb60:	55                   	push   ebp
1011fb61:	8b ec                	mov    ebp,esp
1011fb63:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011fb68:	83 ec 2c             	sub    esp,0x2c
1011fb6b:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1011fb6e:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1011fb74:	56                   	push   esi
1011fb75:	51                   	push   ecx
1011fb76:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
1011fb7c:	8b f0                	mov    esi,eax
1011fb7e:	83 c4 04             	add    esp,0x4
1011fb81:	85 f6                	test   esi,esi
1011fb83:	0f 84 cc 00 00 00    	je     0x1011fc55
1011fb89:	56                   	push   esi
1011fb8a:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
1011fb90:	83 c4 04             	add    esp,0x4
1011fb93:	85 c0                	test   eax,eax
1011fb95:	0f 84 ba 00 00 00    	je     0x1011fc55
1011fb9b:	8b 86 8c 02 00 00    	mov    eax,DWORD PTR [esi+0x28c]
1011fba1:	85 c0                	test   eax,eax
1011fba3:	75 12                	jne    0x1011fbb7
1011fba5:	50                   	push   eax
1011fba6:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1011fbac:	83 c4 04             	add    esp,0x4
1011fbaf:	85 c0                	test   eax,eax
1011fbb1:	0f 84 8f 00 00 00    	je     0x1011fc46
1011fbb7:	57                   	push   edi
1011fbb8:	8b 78 7c             	mov    edi,DWORD PTR [eax+0x7c]
1011fbbb:	85 ff                	test   edi,edi
1011fbbd:	0f 84 82 00 00 00    	je     0x1011fc45
1011fbc3:	8b 07                	mov    eax,DWORD PTR [edi]
1011fbc5:	8b cf                	mov    ecx,edi
1011fbc7:	ff 50 30             	call   DWORD PTR [eax+0x30]
1011fbca:	6a 2c                	push   0x2c
1011fbcc:	8d 45 d4             	lea    eax,[ebp-0x2c]
1011fbcf:	6a 00                	push   0x0
1011fbd1:	50                   	push   eax
1011fbd2:	e8 b9 f8 01 00       	call   0x1013f490
1011fbd7:	8b 07                	mov    eax,DWORD PTR [edi]
1011fbd9:	8d 4d d4             	lea    ecx,[ebp-0x2c]
1011fbdc:	83 c4 0c             	add    esp,0xc
1011fbdf:	51                   	push   ecx
1011fbe0:	8b cf                	mov    ecx,edi
1011fbe2:	ff 90 3c 01 00 00    	call   DWORD PTR [eax+0x13c]
1011fbe8:	85 c0                	test   eax,eax
1011fbea:	74 59                	je     0x1011fc45
1011fbec:	6b 4d f4 2c          	imul   ecx,DWORD PTR [ebp-0xc],0x2c
1011fbf0:	0f 10 4d d4          	movups xmm1,XMMWORD PTR [ebp-0x2c]
1011fbf4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1011fbf7:	0f 10 45 e4          	movups xmm0,XMMWORD PTR [ebp-0x1c]
1011fbfb:	81 c1 88 18 23 10    	add    ecx,0x10231888
1011fc01:	0f 11 09             	movups XMMWORD PTR [ecx],xmm1
1011fc04:	0f 11 41 10          	movups XMMWORD PTR [ecx+0x10],xmm0
1011fc08:	f3 0f 7e 45 f4       	movq   xmm0,QWORD PTR [ebp-0xc]
1011fc0d:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
1011fc12:	66 0f 73 d9 08       	psrldq xmm1,0x8
1011fc17:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
1011fc1a:	66 0f 7e c8          	movd   eax,xmm1
1011fc1e:	85 c0                	test   eax,eax
1011fc20:	74 0e                	je     0x1011fc30
1011fc22:	80 38 00             	cmp    BYTE PTR [eax],0x0
1011fc25:	74 09                	je     0x1011fc30
1011fc27:	50                   	push   eax
1011fc28:	e8 a3 b8 ff ff       	call   0x1011b4d0
1011fc2d:	83 c4 04             	add    esp,0x4
1011fc30:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
1011fc33:	85 c0                	test   eax,eax
1011fc35:	74 0e                	je     0x1011fc45
1011fc37:	80 38 00             	cmp    BYTE PTR [eax],0x0
1011fc3a:	74 09                	je     0x1011fc45
1011fc3c:	50                   	push   eax
1011fc3d:	e8 8e b8 ff ff       	call   0x1011b4d0
1011fc42:	83 c4 04             	add    esp,0x4
1011fc45:	5f                   	pop    edi
1011fc46:	56                   	push   esi
1011fc47:	ff 15 a0 2f 22 10    	call   DWORD PTR ds:0x10222fa0
1011fc4d:	83 c4 04             	add    esp,0x4
1011fc50:	5e                   	pop    esi
1011fc51:	8b e5                	mov    esp,ebp
1011fc53:	5d                   	pop    ebp
1011fc54:	c3                   	ret
1011fc55:	68 90 62 1e 10       	push   0x101e6290
1011fc5a:	6a 01                	push   0x1
1011fc5c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011fc62:	83 c4 08             	add    esp,0x8
1011fc65:	5e                   	pop    esi
1011fc66:	8b e5                	mov    esp,ebp
1011fc68:	5d                   	pop    ebp
1011fc69:	c3                   	ret
