
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1007fc30 <.text+0x7ec30>:
1007fc30:	55                   	push   ebp
1007fc31:	8b ec                	mov    ebp,esp
1007fc33:	51                   	push   ecx
1007fc34:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1007fc37:	33 c9                	xor    ecx,ecx
1007fc39:	53                   	push   ebx
1007fc3a:	56                   	push   esi
1007fc3b:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1007fc3e:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1007fc45:	57                   	push   edi
1007fc46:	85 f6                	test   esi,esi
1007fc48:	74 64                	je     0x1007fcae
1007fc4a:	83 fe 08             	cmp    esi,0x8
1007fc4d:	72 5f                	jb     0x1007fcae
1007fc4f:	8b c6                	mov    eax,esi
1007fc51:	0f 57 db             	xorps  xmm3,xmm3
1007fc54:	83 e0 f8             	and    eax,0xfffffff8
1007fc57:	0f 57 d2             	xorps  xmm2,xmm2
1007fc5a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1007fc60:	66 0f 6e 0c 11       	movd   xmm1,DWORD PTR [ecx+edx*1]
1007fc65:	0f 57 c0             	xorps  xmm0,xmm0
1007fc68:	66 0f 60 c8          	punpcklbw xmm1,xmm0
1007fc6c:	66 0f 61 c8          	punpcklwd xmm1,xmm0
1007fc70:	66 0f fe d9          	paddd  xmm3,xmm1
1007fc74:	66 0f 6e 4c 11 04    	movd   xmm1,DWORD PTR [ecx+edx*1+0x4]
1007fc7a:	66 0f 60 c8          	punpcklbw xmm1,xmm0
1007fc7e:	83 c1 08             	add    ecx,0x8
1007fc81:	66 0f 61 c8          	punpcklwd xmm1,xmm0
1007fc85:	66 0f fe d1          	paddd  xmm2,xmm1
1007fc89:	3b c8                	cmp    ecx,eax
1007fc8b:	72 d3                	jb     0x1007fc60
1007fc8d:	66 0f fe d3          	paddd  xmm2,xmm3
1007fc91:	0f 28 c2             	movaps xmm0,xmm2
1007fc94:	66 0f 73 d8 08       	psrldq xmm0,0x8
1007fc99:	66 0f fe d0          	paddd  xmm2,xmm0
1007fc9d:	0f 10 c2             	movups xmm0,xmm2
1007fca0:	66 0f 73 d8 04       	psrldq xmm0,0x4
1007fca5:	66 0f fe d0          	paddd  xmm2,xmm0
1007fca9:	66 0f 7e 55 fc       	movd   DWORD PTR [ebp-0x4],xmm2
1007fcae:	33 ff                	xor    edi,edi
1007fcb0:	33 db                	xor    ebx,ebx
1007fcb2:	3b ce                	cmp    ecx,esi
1007fcb4:	73 44                	jae    0x1007fcfa
1007fcb6:	8b c6                	mov    eax,esi
1007fcb8:	2b c1                	sub    eax,ecx
1007fcba:	83 f8 02             	cmp    eax,0x2
1007fcbd:	72 21                	jb     0x1007fce0
1007fcbf:	8d 46 ff             	lea    eax,[esi-0x1]
1007fcc2:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1007fcc5:	0f b6 04 11          	movzx  eax,BYTE PTR [ecx+edx*1]
1007fcc9:	03 f8                	add    edi,eax
1007fccb:	0f b6 44 11 01       	movzx  eax,BYTE PTR [ecx+edx*1+0x1]
1007fcd0:	83 c1 02             	add    ecx,0x2
1007fcd3:	03 d8                	add    ebx,eax
1007fcd5:	8b c1                	mov    eax,ecx
1007fcd7:	3b 4d 0c             	cmp    ecx,DWORD PTR [ebp+0xc]
1007fcda:	72 e9                	jb     0x1007fcc5
1007fcdc:	3b c6                	cmp    eax,esi
1007fcde:	73 10                	jae    0x1007fcf0
1007fce0:	0f b6 04 11          	movzx  eax,BYTE PTR [ecx+edx*1]
1007fce4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1007fce7:	03 c8                	add    ecx,eax
1007fce9:	8d 04 3b             	lea    eax,[ebx+edi*1]
1007fcec:	03 c8                	add    ecx,eax
1007fcee:	eb 0d                	jmp    0x1007fcfd
1007fcf0:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1007fcf3:	8d 04 3b             	lea    eax,[ebx+edi*1]
1007fcf6:	03 c8                	add    ecx,eax
1007fcf8:	eb 03                	jmp    0x1007fcfd
1007fcfa:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1007fcfd:	66 0f 6e c6          	movd   xmm0,esi
1007fd01:	83 ec 08             	sub    esp,0x8
1007fd04:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1007fd08:	c1 ee 1f             	shr    esi,0x1f
1007fd0b:	66 0f 6e c9          	movd   xmm1,ecx
1007fd0f:	f2 0f 58 04 f5 b0 f5 	addsd  xmm0,QWORD PTR [esi*8+0x1013f5b0]
1007fd16:	13 10 
1007fd18:	0f 5b c9             	cvtdq2ps xmm1,xmm1
1007fd1b:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1007fd1f:	f3 0f 5e c8          	divss  xmm1,xmm0
1007fd23:	0f 5a c1             	cvtps2pd xmm0,xmm1
1007fd26:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1007fd2b:	68 90 09 15 10       	push   0x10150990
1007fd30:	e8 eb 96 fa ff       	call   0x10029420
1007fd35:	50                   	push   eax
1007fd36:	ff 15 84 26 1b 10    	call   DWORD PTR ds:0x101b2684
1007fd3c:	83 c4 10             	add    esp,0x10
1007fd3f:	5f                   	pop    edi
1007fd40:	5e                   	pop    esi
1007fd41:	5b                   	pop    ebx
1007fd42:	8b e5                	mov    esp,ebp
1007fd44:	5d                   	pop    ebp
1007fd45:	c2 08 00             	ret    0x8
1007fd48:	cc                   	int3
1007fd49:	cc                   	int3
1007fd4a:	cc                   	int3
1007fd4b:	cc                   	int3
1007fd4c:	cc                   	int3
1007fd4d:	cc                   	int3
1007fd4e:	cc                   	int3
1007fd4f:	cc                   	int3
1007fd50:	55                   	push   ebp
1007fd51:	8b ec                	mov    ebp,esp
1007fd53:	81 ec 08 01 00 00    	sub    esp,0x108
1007fd59:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1007fd5e:	33 c5                	xor    eax,ebp
1007fd60:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1007fd63:	53                   	push   ebx
1007fd64:	56                   	push   esi
1007fd65:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1007fd68:	57                   	push   edi
1007fd69:	8b f9                	mov    edi,ecx
1007fd6b:	80 3f 00             	cmp    BYTE PTR [edi],0x0
1007fd6e:	0f 84 ba 03 00 00    	je     0x1008012e
1007fd74:	83 3d a8 40 54 10 00 	cmp    DWORD PTR ds:0x105440a8,0x0
1007fd7b:	0f 84 ad 03 00 00    	je     0x1008012e
1007fd81:	6a 00                	push   0x0
1007fd83:	68 a8 ec 14 10       	push   0x1014eca8
1007fd88:	ff 15 c4 26 1b 10    	call   DWORD PTR ds:0x101b26c4
1007fd8e:	83 c4 08             	add    esp,0x8
1007fd91:	85 c0                	test   eax,eax
1007fd93:	0f 85 95 03 00 00    	jne    0x1008012e
1007fd99:	85 f6                	test   esi,esi
1007fd9b:	0f 84 7e 03 00 00    	je     0x1008011f
1007fda1:	b9 c0 09 15 10       	mov    ecx,0x101509c0
1007fda6:	8b c6                	mov    eax,esi
1007fda8:	8a 10                	mov    dl,BYTE PTR [eax]
1007fdaa:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007fdac:	75 1a                	jne    0x1007fdc8
1007fdae:	84 d2                	test   dl,dl
1007fdb0:	74 12                	je     0x1007fdc4
1007fdb2:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007fdb5:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007fdb8:	75 0e                	jne    0x1007fdc8
1007fdba:	83 c0 02             	add    eax,0x2
1007fdbd:	83 c1 02             	add    ecx,0x2
1007fdc0:	84 d2                	test   dl,dl
1007fdc2:	75 e4                	jne    0x1007fda8
1007fdc4:	33 c0                	xor    eax,eax
1007fdc6:	eb 05                	jmp    0x1007fdcd
1007fdc8:	1b c0                	sbb    eax,eax
1007fdca:	83 c8 01             	or     eax,0x1
1007fdcd:	85 c0                	test   eax,eax
1007fdcf:	75 06                	jne    0x1007fdd7
1007fdd1:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007fdd7:	b9 d0 09 15 10       	mov    ecx,0x101509d0
1007fddc:	8b c6                	mov    eax,esi
1007fdde:	66 90                	xchg   ax,ax
1007fde0:	8a 10                	mov    dl,BYTE PTR [eax]
1007fde2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007fde4:	75 1a                	jne    0x1007fe00
1007fde6:	84 d2                	test   dl,dl
1007fde8:	74 12                	je     0x1007fdfc
1007fdea:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007fded:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007fdf0:	75 0e                	jne    0x1007fe00
1007fdf2:	83 c0 02             	add    eax,0x2
1007fdf5:	83 c1 02             	add    ecx,0x2
1007fdf8:	84 d2                	test   dl,dl
1007fdfa:	75 e4                	jne    0x1007fde0
1007fdfc:	33 c0                	xor    eax,eax
1007fdfe:	eb 05                	jmp    0x1007fe05
1007fe00:	1b c0                	sbb    eax,eax
1007fe02:	83 c8 01             	or     eax,0x1
1007fe05:	85 c0                	test   eax,eax
1007fe07:	75 06                	jne    0x1007fe0f
1007fe09:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007fe0f:	b9 e4 09 15 10       	mov    ecx,0x101509e4
1007fe14:	8b c6                	mov    eax,esi
1007fe16:	8a 10                	mov    dl,BYTE PTR [eax]
1007fe18:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007fe1a:	75 1a                	jne    0x1007fe36
1007fe1c:	84 d2                	test   dl,dl
1007fe1e:	74 12                	je     0x1007fe32
1007fe20:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007fe23:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007fe26:	75 0e                	jne    0x1007fe36
1007fe28:	83 c0 02             	add    eax,0x2
1007fe2b:	83 c1 02             	add    ecx,0x2
1007fe2e:	84 d2                	test   dl,dl
1007fe30:	75 e4                	jne    0x1007fe16
1007fe32:	33 c0                	xor    eax,eax
1007fe34:	eb 05                	jmp    0x1007fe3b
1007fe36:	1b c0                	sbb    eax,eax
1007fe38:	83 c8 01             	or     eax,0x1
1007fe3b:	85 c0                	test   eax,eax
1007fe3d:	75 06                	jne    0x1007fe45
1007fe3f:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007fe45:	b9 f8 09 15 10       	mov    ecx,0x101509f8
1007fe4a:	8b c6                	mov    eax,esi
1007fe4c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1007fe50:	8a 10                	mov    dl,BYTE PTR [eax]
1007fe52:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007fe54:	75 1a                	jne    0x1007fe70
1007fe56:	84 d2                	test   dl,dl
1007fe58:	74 12                	je     0x1007fe6c
1007fe5a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007fe5d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007fe60:	75 0e                	jne    0x1007fe70
1007fe62:	83 c0 02             	add    eax,0x2
1007fe65:	83 c1 02             	add    ecx,0x2
1007fe68:	84 d2                	test   dl,dl
1007fe6a:	75 e4                	jne    0x1007fe50
1007fe6c:	33 c0                	xor    eax,eax
1007fe6e:	eb 05                	jmp    0x1007fe75
1007fe70:	1b c0                	sbb    eax,eax
1007fe72:	83 c8 01             	or     eax,0x1
1007fe75:	85 c0                	test   eax,eax
1007fe77:	75 06                	jne    0x1007fe7f
1007fe79:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007fe7f:	b9 08 0a 15 10       	mov    ecx,0x10150a08
1007fe84:	8b c6                	mov    eax,esi
1007fe86:	8a 10                	mov    dl,BYTE PTR [eax]
1007fe88:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007fe8a:	75 1a                	jne    0x1007fea6
1007fe8c:	84 d2                	test   dl,dl
1007fe8e:	74 12                	je     0x1007fea2
1007fe90:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007fe93:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007fe96:	75 0e                	jne    0x1007fea6
1007fe98:	83 c0 02             	add    eax,0x2
1007fe9b:	83 c1 02             	add    ecx,0x2
1007fe9e:	84 d2                	test   dl,dl
1007fea0:	75 e4                	jne    0x1007fe86
1007fea2:	33 c0                	xor    eax,eax
1007fea4:	eb 05                	jmp    0x1007feab
1007fea6:	1b c0                	sbb    eax,eax
1007fea8:	83 c8 01             	or     eax,0x1
1007feab:	85 c0                	test   eax,eax
1007fead:	75 06                	jne    0x1007feb5
1007feaf:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007feb5:	b9 1c 0a 15 10       	mov    ecx,0x10150a1c
1007feba:	8b c6                	mov    eax,esi
1007febc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1007fec0:	8a 10                	mov    dl,BYTE PTR [eax]
1007fec2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007fec4:	75 1a                	jne    0x1007fee0
1007fec6:	84 d2                	test   dl,dl
1007fec8:	74 12                	je     0x1007fedc
1007feca:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007fecd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007fed0:	75 0e                	jne    0x1007fee0
1007fed2:	83 c0 02             	add    eax,0x2
1007fed5:	83 c1 02             	add    ecx,0x2
1007fed8:	84 d2                	test   dl,dl
1007feda:	75 e4                	jne    0x1007fec0
1007fedc:	33 c0                	xor    eax,eax
1007fede:	eb 05                	jmp    0x1007fee5
1007fee0:	1b c0                	sbb    eax,eax
1007fee2:	83 c8 01             	or     eax,0x1
1007fee5:	85 c0                	test   eax,eax
1007fee7:	75 06                	jne    0x1007feef
1007fee9:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007feef:	b9 28 0a 15 10       	mov    ecx,0x10150a28
1007fef4:	8b c6                	mov    eax,esi
1007fef6:	8a 10                	mov    dl,BYTE PTR [eax]
1007fef8:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007fefa:	75 1a                	jne    0x1007ff16
1007fefc:	84 d2                	test   dl,dl
1007fefe:	74 12                	je     0x1007ff12
1007ff00:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007ff03:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007ff06:	75 0e                	jne    0x1007ff16
1007ff08:	83 c0 02             	add    eax,0x2
1007ff0b:	83 c1 02             	add    ecx,0x2
1007ff0e:	84 d2                	test   dl,dl
1007ff10:	75 e4                	jne    0x1007fef6
1007ff12:	33 c0                	xor    eax,eax
1007ff14:	eb 05                	jmp    0x1007ff1b
1007ff16:	1b c0                	sbb    eax,eax
1007ff18:	83 c8 01             	or     eax,0x1
1007ff1b:	85 c0                	test   eax,eax
1007ff1d:	75 06                	jne    0x1007ff25
1007ff1f:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007ff25:	b9 34 0a 15 10       	mov    ecx,0x10150a34
1007ff2a:	8b c6                	mov    eax,esi
1007ff2c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1007ff30:	8a 10                	mov    dl,BYTE PTR [eax]
1007ff32:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007ff34:	75 1a                	jne    0x1007ff50
1007ff36:	84 d2                	test   dl,dl
1007ff38:	74 12                	je     0x1007ff4c
1007ff3a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007ff3d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007ff40:	75 0e                	jne    0x1007ff50
1007ff42:	83 c0 02             	add    eax,0x2
1007ff45:	83 c1 02             	add    ecx,0x2
1007ff48:	84 d2                	test   dl,dl
1007ff4a:	75 e4                	jne    0x1007ff30
1007ff4c:	33 c0                	xor    eax,eax
1007ff4e:	eb 05                	jmp    0x1007ff55
1007ff50:	1b c0                	sbb    eax,eax
1007ff52:	83 c8 01             	or     eax,0x1
1007ff55:	85 c0                	test   eax,eax
1007ff57:	75 06                	jne    0x1007ff5f
1007ff59:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007ff5f:	b9 44 0a 15 10       	mov    ecx,0x10150a44
1007ff64:	8b c6                	mov    eax,esi
1007ff66:	8a 10                	mov    dl,BYTE PTR [eax]
1007ff68:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007ff6a:	75 1a                	jne    0x1007ff86
1007ff6c:	84 d2                	test   dl,dl
1007ff6e:	74 12                	je     0x1007ff82
1007ff70:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007ff73:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007ff76:	75 0e                	jne    0x1007ff86
1007ff78:	83 c0 02             	add    eax,0x2
1007ff7b:	83 c1 02             	add    ecx,0x2
1007ff7e:	84 d2                	test   dl,dl
1007ff80:	75 e4                	jne    0x1007ff66
1007ff82:	33 c0                	xor    eax,eax
1007ff84:	eb 05                	jmp    0x1007ff8b
1007ff86:	1b c0                	sbb    eax,eax
1007ff88:	83 c8 01             	or     eax,0x1
1007ff8b:	85 c0                	test   eax,eax
1007ff8d:	75 06                	jne    0x1007ff95
1007ff8f:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007ff95:	b9 50 0a 15 10       	mov    ecx,0x10150a50
1007ff9a:	8b c6                	mov    eax,esi
1007ff9c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1007ffa0:	8a 10                	mov    dl,BYTE PTR [eax]
1007ffa2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007ffa4:	75 1a                	jne    0x1007ffc0
1007ffa6:	84 d2                	test   dl,dl
1007ffa8:	74 12                	je     0x1007ffbc
1007ffaa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007ffad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007ffb0:	75 0e                	jne    0x1007ffc0
1007ffb2:	83 c0 02             	add    eax,0x2
1007ffb5:	83 c1 02             	add    ecx,0x2
1007ffb8:	84 d2                	test   dl,dl
1007ffba:	75 e4                	jne    0x1007ffa0
1007ffbc:	33 c0                	xor    eax,eax
1007ffbe:	eb 05                	jmp    0x1007ffc5
1007ffc0:	1b c0                	sbb    eax,eax
1007ffc2:	83 c8 01             	or     eax,0x1
1007ffc5:	85 c0                	test   eax,eax
1007ffc7:	75 06                	jne    0x1007ffcf
1007ffc9:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1007ffcf:	b9 5c 0a 15 10       	mov    ecx,0x10150a5c
1007ffd4:	8b c6                	mov    eax,esi
1007ffd6:	8a 10                	mov    dl,BYTE PTR [eax]
1007ffd8:	3a 11                	cmp    dl,BYTE PTR [ecx]
1007ffda:	75 1a                	jne    0x1007fff6
1007ffdc:	84 d2                	test   dl,dl
1007ffde:	74 12                	je     0x1007fff2
1007ffe0:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007ffe3:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1007ffe6:	75 0e                	jne    0x1007fff6
1007ffe8:	83 c0 02             	add    eax,0x2
1007ffeb:	83 c1 02             	add    ecx,0x2
1007ffee:	84 d2                	test   dl,dl
1007fff0:	75 e4                	jne    0x1007ffd6
1007fff2:	33 c0                	xor    eax,eax
1007fff4:	eb 05                	jmp    0x1007fffb
1007fff6:	1b c0                	sbb    eax,eax
1007fff8:	83 c8 01             	or     eax,0x1
1007fffb:	85 c0                	test   eax,eax
1007fffd:	75 06                	jne    0x10080005
1007ffff:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
10080005:	b9 68 0a 15 10       	mov    ecx,0x10150a68
1008000a:	8b c6                	mov    eax,esi
1008000c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10080010:	8a 10                	mov    dl,BYTE PTR [eax]
10080012:	3a 11                	cmp    dl,BYTE PTR [ecx]
10080014:	75 1a                	jne    0x10080030
10080016:	84 d2                	test   dl,dl
10080018:	74 12                	je     0x1008002c
1008001a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008001d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080020:	75 0e                	jne    0x10080030
10080022:	83 c0 02             	add    eax,0x2
10080025:	83 c1 02             	add    ecx,0x2
10080028:	84 d2                	test   dl,dl
1008002a:	75 e4                	jne    0x10080010
1008002c:	33 c0                	xor    eax,eax
1008002e:	eb 05                	jmp    0x10080035
10080030:	1b c0                	sbb    eax,eax
10080032:	83 c8 01             	or     eax,0x1
10080035:	85 c0                	test   eax,eax
10080037:	75 06                	jne    0x1008003f
10080039:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1008003f:	b9 74 0a 15 10       	mov    ecx,0x10150a74
10080044:	8b c6                	mov    eax,esi
10080046:	8a 10                	mov    dl,BYTE PTR [eax]
10080048:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008004a:	75 1a                	jne    0x10080066
1008004c:	84 d2                	test   dl,dl
1008004e:	74 12                	je     0x10080062
10080050:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10080053:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080056:	75 0e                	jne    0x10080066
10080058:	83 c0 02             	add    eax,0x2
1008005b:	83 c1 02             	add    ecx,0x2
1008005e:	84 d2                	test   dl,dl
10080060:	75 e4                	jne    0x10080046
10080062:	33 c0                	xor    eax,eax
10080064:	eb 05                	jmp    0x1008006b
10080066:	1b c0                	sbb    eax,eax
10080068:	83 c8 01             	or     eax,0x1
1008006b:	85 c0                	test   eax,eax
1008006d:	75 06                	jne    0x10080075
1008006f:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
10080075:	b9 88 0a 15 10       	mov    ecx,0x10150a88
1008007a:	8b c6                	mov    eax,esi
1008007c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10080080:	8a 10                	mov    dl,BYTE PTR [eax]
10080082:	3a 11                	cmp    dl,BYTE PTR [ecx]
10080084:	75 1a                	jne    0x100800a0
10080086:	84 d2                	test   dl,dl
10080088:	74 12                	je     0x1008009c
1008008a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008008d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080090:	75 0e                	jne    0x100800a0
10080092:	83 c0 02             	add    eax,0x2
10080095:	83 c1 02             	add    ecx,0x2
10080098:	84 d2                	test   dl,dl
1008009a:	75 e4                	jne    0x10080080
1008009c:	33 c0                	xor    eax,eax
1008009e:	eb 05                	jmp    0x100800a5
100800a0:	1b c0                	sbb    eax,eax
100800a2:	83 c8 01             	or     eax,0x1
100800a5:	85 c0                	test   eax,eax
100800a7:	75 06                	jne    0x100800af
100800a9:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
100800af:	b9 94 0a 15 10       	mov    ecx,0x10150a94
100800b4:	8b c6                	mov    eax,esi
100800b6:	8a 10                	mov    dl,BYTE PTR [eax]
100800b8:	3a 11                	cmp    dl,BYTE PTR [ecx]
100800ba:	75 1a                	jne    0x100800d6
100800bc:	84 d2                	test   dl,dl
100800be:	74 12                	je     0x100800d2
100800c0:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100800c3:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100800c6:	75 0e                	jne    0x100800d6
100800c8:	83 c0 02             	add    eax,0x2
100800cb:	83 c1 02             	add    ecx,0x2
100800ce:	84 d2                	test   dl,dl
100800d0:	75 e4                	jne    0x100800b6
100800d2:	33 c0                	xor    eax,eax
100800d4:	eb 05                	jmp    0x100800db
100800d6:	1b c0                	sbb    eax,eax
100800d8:	83 c8 01             	or     eax,0x1
100800db:	85 c0                	test   eax,eax
100800dd:	75 06                	jne    0x100800e5
100800df:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
100800e5:	b9 a4 0a 15 10       	mov    ecx,0x10150aa4
100800ea:	8b c6                	mov    eax,esi
100800ec:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100800f0:	8a 10                	mov    dl,BYTE PTR [eax]
100800f2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100800f4:	75 1a                	jne    0x10080110
100800f6:	84 d2                	test   dl,dl
100800f8:	74 12                	je     0x1008010c
100800fa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100800fd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080100:	75 0e                	jne    0x10080110
10080102:	83 c0 02             	add    eax,0x2
10080105:	83 c1 02             	add    ecx,0x2
10080108:	84 d2                	test   dl,dl
1008010a:	75 e4                	jne    0x100800f0
1008010c:	33 c0                	xor    eax,eax
1008010e:	eb 05                	jmp    0x10080115
10080110:	1b c0                	sbb    eax,eax
10080112:	83 c8 01             	or     eax,0x1
10080115:	85 c0                	test   eax,eax
10080117:	75 06                	jne    0x1008011f
10080119:	88 87 dc 00 00 00    	mov    BYTE PTR [edi+0xdc],al
1008011f:	80 bf c4 00 00 00 00 	cmp    BYTE PTR [edi+0xc4],0x0
10080126:	74 1b                	je     0x10080143
10080128:	89 b7 c8 00 00 00    	mov    DWORD PTR [edi+0xc8],esi
1008012e:	5f                   	pop    edi
1008012f:	5e                   	pop    esi
10080130:	33 c0                	xor    eax,eax
10080132:	5b                   	pop    ebx
10080133:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10080136:	33 cd                	xor    ecx,ebp
10080138:	e8 83 41 03 00       	call   0x100b42c0
1008013d:	8b e5                	mov    esp,ebp
1008013f:	5d                   	pop    ebp
10080140:	c2 04 00             	ret    0x4
10080143:	8b 87 c8 00 00 00    	mov    eax,DWORD PTR [edi+0xc8]
10080149:	85 c0                	test   eax,eax
1008014b:	74 2f                	je     0x1008017c
1008014d:	85 f6                	test   esi,esi
1008014f:	74 2b                	je     0x1008017c
10080151:	8b ce                	mov    ecx,esi
10080153:	8a 10                	mov    dl,BYTE PTR [eax]
10080155:	3a 11                	cmp    dl,BYTE PTR [ecx]
10080157:	75 1a                	jne    0x10080173
10080159:	84 d2                	test   dl,dl
1008015b:	74 12                	je     0x1008016f
1008015d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10080160:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080163:	75 0e                	jne    0x10080173
10080165:	83 c0 02             	add    eax,0x2
10080168:	83 c1 02             	add    ecx,0x2
1008016b:	84 d2                	test   dl,dl
1008016d:	75 e4                	jne    0x10080153
1008016f:	33 c0                	xor    eax,eax
10080171:	eb 05                	jmp    0x10080178
10080173:	1b c0                	sbb    eax,eax
10080175:	83 c8 01             	or     eax,0x1
10080178:	85 c0                	test   eax,eax
1008017a:	74 b2                	je     0x1008012e
1008017c:	8d 5f 36             	lea    ebx,[edi+0x36]
1008017f:	8b c6                	mov    eax,esi
10080181:	8b cb                	mov    ecx,ebx
10080183:	8a 10                	mov    dl,BYTE PTR [eax]
10080185:	3a 11                	cmp    dl,BYTE PTR [ecx]
10080187:	75 1a                	jne    0x100801a3
10080189:	84 d2                	test   dl,dl
1008018b:	74 12                	je     0x1008019f
1008018d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10080190:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10080193:	75 0e                	jne    0x100801a3
10080195:	83 c0 02             	add    eax,0x2
10080198:	83 c1 02             	add    ecx,0x2
1008019b:	84 d2                	test   dl,dl
1008019d:	75 e4                	jne    0x10080183
1008019f:	33 c0                	xor    eax,eax
100801a1:	eb 05                	jmp    0x100801a8
100801a3:	1b c0                	sbb    eax,eax
100801a5:	83 c8 01             	or     eax,0x1
100801a8:	85 c0                	test   eax,eax
100801aa:	74 82                	je     0x1008012e
100801ac:	56                   	push   esi
100801ad:	c7 87 cc 00 00 00 00 	mov    DWORD PTR [edi+0xcc],0x0
100801b4:	00 00 00 
100801b7:	c7 87 d0 00 00 00 00 	mov    DWORD PTR [edi+0xd0],0x0
100801be:	00 00 00 
100801c1:	c7 87 d4 00 00 00 00 	mov    DWORD PTR [edi+0xd4],0x0
100801c8:	00 00 00 
100801cb:	c7 87 d8 00 00 00 00 	mov    DWORD PTR [edi+0xd8],0x0
100801d2:	00 00 00 
100801d5:	ff 15 24 27 1b 10    	call   DWORD PTR ds:0x101b2724
100801db:	50                   	push   eax
100801dc:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
100801e2:	68 b4 0a 15 10       	push   0x10150ab4
100801e7:	50                   	push   eax
100801e8:	e8 13 c7 f8 ff       	call   0x1000c900
100801ed:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
100801f3:	83 c4 10             	add    esp,0x10
100801f6:	80 bf dc 00 00 00 00 	cmp    BYTE PTR [edi+0xdc],0x0
100801fd:	74 55                	je     0x10080254
100801ff:	85 c9                	test   ecx,ecx
10080201:	74 05                	je     0x10080208
10080203:	8b 01                	mov    eax,DWORD PTR [ecx]
10080205:	ff 50 18             	call   DWORD PTR [eax+0x18]
10080208:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
1008020e:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10080214:	6a 00                	push   0x0
10080216:	6a 00                	push   0x0
10080218:	6a 01                	push   0x1
1008021a:	8b 01                	mov    eax,DWORD PTR [ecx]
1008021c:	6a 01                	push   0x1
1008021e:	6a 01                	push   0x1
10080220:	52                   	push   edx
10080221:	ff 50 08             	call   DWORD PTR [eax+0x8]
10080224:	a3 b0 40 54 10       	mov    ds:0x105440b0,eax
10080229:	85 c0                	test   eax,eax
1008022b:	0f 84 96 00 00 00    	je     0x100802c7
10080231:	68 a0 09 15 10       	push   0x101509a0
10080236:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
1008023c:	f3 0f 10 05 f0 cc 13 	movss  xmm0,DWORD PTR ds:0x1013ccf0
10080243:	10 
10080244:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
1008024a:	f3 0f 5d 85 f8 fe ff 	minss  xmm0,DWORD PTR [ebp-0x108]
10080251:	ff 
10080252:	eb 4f                	jmp    0x100802a3
10080254:	85 c9                	test   ecx,ecx
10080256:	74 05                	je     0x1008025d
10080258:	8b 01                	mov    eax,DWORD PTR [ecx]
1008025a:	ff 50 18             	call   DWORD PTR [eax+0x18]
1008025d:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
10080263:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10080269:	6a 00                	push   0x0
1008026b:	6a 00                	push   0x0
1008026d:	6a 01                	push   0x1
1008026f:	8b 01                	mov    eax,DWORD PTR [ecx]
10080271:	6a 01                	push   0x1
10080273:	6a 00                	push   0x0
10080275:	52                   	push   edx
10080276:	ff 50 08             	call   DWORD PTR [eax+0x8]
10080279:	a3 b0 40 54 10       	mov    ds:0x105440b0,eax
1008027e:	85 c0                	test   eax,eax
10080280:	74 45                	je     0x100802c7
10080282:	68 a0 09 15 10       	push   0x101509a0
10080287:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
1008028d:	f3 0f 10 05 f0 cc 13 	movss  xmm0,DWORD PTR ds:0x1013ccf0
10080294:	10 
10080295:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
1008029b:	f3 0f 5d 85 f8 fe ff 	minss  xmm0,DWORD PTR [ebp-0x108]
100802a2:	ff 
100802a3:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
100802a9:	0f 57 c9             	xorps  xmm1,xmm1
100802ac:	f3 0f 5f c8          	maxss  xmm1,xmm0
100802b0:	8b 01                	mov    eax,DWORD PTR [ecx]
100802b2:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100802b7:	ff 50 20             	call   DWORD PTR [eax+0x20]
100802ba:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
100802c0:	6a 00                	push   0x0
100802c2:	8b 01                	mov    eax,DWORD PTR [ecx]
100802c4:	ff 50 10             	call   DWORD PTR [eax+0x10]
100802c7:	c7 87 b8 00 00 00 01 	mov    DWORD PTR [edi+0xb8],0x1
100802ce:	00 00 00 
100802d1:	2b de                	sub    ebx,esi
100802d3:	8a 06                	mov    al,BYTE PTR [esi]
100802d5:	8d 76 01             	lea    esi,[esi+0x1]
100802d8:	88 44 33 ff          	mov    BYTE PTR [ebx+esi*1-0x1],al
100802dc:	84 c0                	test   al,al
100802de:	75 f3                	jne    0x100802d3
100802e0:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100802e3:	b8 01 00 00 00       	mov    eax,0x1
100802e8:	5f                   	pop    edi
100802e9:	5e                   	pop    esi
100802ea:	33 cd                	xor    ecx,ebp
100802ec:	5b                   	pop    ebx
100802ed:	e8 ce 3f 03 00       	call   0x100b42c0
100802f2:	8b e5                	mov    esp,ebp
100802f4:	5d                   	pop    ebp
100802f5:	c2 04 00             	ret    0x4
100802f8:	cc                   	int3
100802f9:	cc                   	int3
100802fa:	cc                   	int3
100802fb:	cc                   	int3
100802fc:	cc                   	int3
100802fd:	cc                   	int3
100802fe:	cc                   	int3
100802ff:	cc                   	int3
10080300:	55                   	push   ebp
10080301:	8b ec                	mov    ebp,esp
10080303:	81 ec 08 01 00 00    	sub    esp,0x108
10080309:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1008030e:	33 c5                	xor    eax,ebp
10080310:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10080313:	56                   	push   esi
10080314:	8b f1                	mov    esi,ecx
10080316:	57                   	push   edi
10080317:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1008031a:	80 3e 00             	cmp    BYTE PTR [esi],0x0
1008031d:	0f 84 d6 00 00 00    	je     0x100803f9
10080323:	83 3d a8 40 54 10 00 	cmp    DWORD PTR ds:0x105440a8,0x0
1008032a:	0f 84 c9 00 00 00    	je     0x100803f9
10080330:	6a 00                	push   0x0
10080332:	68 a8 ec 14 10       	push   0x1014eca8
10080337:	ff 15 c4 26 1b 10    	call   DWORD PTR ds:0x101b26c4
1008033d:	83 c4 08             	add    esp,0x8
10080340:	85 c0                	test   eax,eax
10080342:	0f 85 b1 00 00 00    	jne    0x100803f9
10080348:	39 86 b8 00 00 00    	cmp    DWORD PTR [esi+0xb8],eax
1008034e:	74 0f                	je     0x1008035f
10080350:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
10080356:	85 c9                	test   ecx,ecx
10080358:	74 05                	je     0x1008035f
1008035a:	8b 01                	mov    eax,DWORD PTR [ecx]
1008035c:	ff 50 18             	call   DWORD PTR [eax+0x18]
1008035f:	57                   	push   edi
10080360:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
10080366:	68 04 6b 14 10       	push   0x10146b04
1008036b:	50                   	push   eax
1008036c:	e8 8f c5 f8 ff       	call   0x1000c900
10080371:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
10080377:	83 c4 0c             	add    esp,0xc
1008037a:	85 c9                	test   ecx,ecx
1008037c:	74 05                	je     0x10080383
1008037e:	8b 01                	mov    eax,DWORD PTR [ecx]
10080380:	ff 50 18             	call   DWORD PTR [eax+0x18]
10080383:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
10080389:	6a 00                	push   0x0
1008038b:	6a 00                	push   0x0
1008038d:	6a 01                	push   0x1
1008038f:	8b 01                	mov    eax,DWORD PTR [ecx]
10080391:	6a 01                	push   0x1
10080393:	6a 00                	push   0x0
10080395:	57                   	push   edi
10080396:	ff 50 08             	call   DWORD PTR [eax+0x8]
10080399:	a3 b0 40 54 10       	mov    ds:0x105440b0,eax
1008039e:	85 c0                	test   eax,eax
100803a0:	74 36                	je     0x100803d8
100803a2:	68 a0 09 15 10       	push   0x101509a0
100803a7:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
100803ad:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
100803b3:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
100803b9:	f3 0f 10 85 f8 fe ff 	movss  xmm0,DWORD PTR [ebp-0x108]
100803c0:	ff 
100803c1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100803c6:	8b 01                	mov    eax,DWORD PTR [ecx]
100803c8:	ff 50 20             	call   DWORD PTR [eax+0x20]
100803cb:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
100803d1:	6a 00                	push   0x0
100803d3:	8b 01                	mov    eax,DWORD PTR [ecx]
100803d5:	ff 50 10             	call   DWORD PTR [eax+0x10]
100803d8:	5f                   	pop    edi
100803d9:	c7 86 b8 00 00 00 01 	mov    DWORD PTR [esi+0xb8],0x1
100803e0:	00 00 00 
100803e3:	b8 01 00 00 00       	mov    eax,0x1
100803e8:	5e                   	pop    esi
100803e9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100803ec:	33 cd                	xor    ecx,ebp
100803ee:	e8 cd 3e 03 00       	call   0x100b42c0
100803f3:	8b e5                	mov    esp,ebp
100803f5:	5d                   	pop    ebp
100803f6:	c2 04 00             	ret    0x4
100803f9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100803fc:	33 c0                	xor    eax,eax
100803fe:	5f                   	pop    edi
100803ff:	33 cd                	xor    ecx,ebp
10080401:	5e                   	pop    esi
10080402:	e8 b9 3e 03 00       	call   0x100b42c0
10080407:	8b e5                	mov    esp,ebp
10080409:	5d                   	pop    ebp
1008040a:	c2 04 00             	ret    0x4
1008040d:	cc                   	int3
1008040e:	cc                   	int3
1008040f:	cc                   	int3
10080410:	55                   	push   ebp
10080411:	8b ec                	mov    ebp,esp
10080413:	81 ec 0c 02 00 00    	sub    esp,0x20c
10080419:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1008041e:	33 c5                	xor    eax,ebp
10080420:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10080423:	80 39 00             	cmp    BYTE PTR [ecx],0x0
10080426:	53                   	push   ebx
10080427:	56                   	push   esi
10080428:	57                   	push   edi
10080429:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1008042c:	0f 84 b6 02 00 00    	je     0x100806e8
10080432:	83 3d a8 40 54 10 00 	cmp    DWORD PTR ds:0x105440a8,0x0
10080439:	0f 84 a9 02 00 00    	je     0x100806e8
1008043f:	68 c8 96 14 10       	push   0x101496c8
10080444:	57                   	push   edi
10080445:	e8 a6 38 05 00       	call   0x100d3cf0
1008044a:	83 c4 08             	add    esp,0x8
1008044d:	85 c0                	test   eax,eax
1008044f:	0f 84 bd 00 00 00    	je     0x10080512
10080455:	8b d7                	mov    edx,edi
10080457:	32 db                	xor    bl,bl
10080459:	33 f6                	xor    esi,esi
1008045b:	33 c9                	xor    ecx,ecx
1008045d:	8d 42 01             	lea    eax,[edx+0x1]
10080460:	89 85 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],eax
10080466:	8a 02                	mov    al,BYTE PTR [edx]
10080468:	42                   	inc    edx
10080469:	84 c0                	test   al,al
1008046b:	75 f9                	jne    0x10080466
1008046d:	2b 95 f8 fd ff ff    	sub    edx,DWORD PTR [ebp-0x208]
10080473:	0f 84 99 00 00 00    	je     0x10080512
10080479:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10080480:	8a 04 0f             	mov    al,BYTE PTR [edi+ecx*1]
10080483:	84 db                	test   bl,bl
10080485:	74 0a                	je     0x10080491
10080487:	88 84 35 fc fe ff ff 	mov    BYTE PTR [ebp+esi*1-0x104],al
1008048e:	46                   	inc    esi
1008048f:	eb 0a                	jmp    0x1008049b
10080491:	3c 2f                	cmp    al,0x2f
10080493:	74 04                	je     0x10080499
10080495:	3c 5c                	cmp    al,0x5c
10080497:	75 02                	jne    0x1008049b
10080499:	b3 01                	mov    bl,0x1
1008049b:	41                   	inc    ecx
1008049c:	3b ca                	cmp    ecx,edx
1008049e:	72 e0                	jb     0x10080480
100804a0:	84 db                	test   bl,bl
100804a2:	74 6e                	je     0x10080512
100804a4:	81 fe 00 01 00 00    	cmp    esi,0x100
100804aa:	0f 83 4b 02 00 00    	jae    0x100806fb
100804b0:	a1 dc 96 14 10       	mov    eax,ds:0x101496dc
100804b5:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
100804bb:	f3 0f 7e 05 d4 96 14 	movq   xmm0,QWORD PTR ds:0x101496d4
100804c2:	10 
100804c3:	89 85 04 fe ff ff    	mov    DWORD PTR [ebp-0x1fc],eax
100804c9:	a0 e0 96 14 10       	mov    al,ds:0x101496e0
100804ce:	c6 84 35 fc fe ff ff 	mov    BYTE PTR [ebp+esi*1-0x104],0x0
100804d5:	00 
100804d6:	8b f2                	mov    esi,edx
100804d8:	66 0f d6 85 fc fd ff 	movq   QWORD PTR [ebp-0x204],xmm0
100804df:	ff 
100804e0:	88 85 08 fe ff ff    	mov    BYTE PTR [ebp-0x1f8],al
100804e6:	8a 02                	mov    al,BYTE PTR [edx]
100804e8:	42                   	inc    edx
100804e9:	84 c0                	test   al,al
100804eb:	75 f9                	jne    0x100804e6
100804ed:	8d bd fc fd ff ff    	lea    edi,[ebp-0x204]
100804f3:	2b d6                	sub    edx,esi
100804f5:	4f                   	dec    edi
100804f6:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100804f9:	47                   	inc    edi
100804fa:	84 c0                	test   al,al
100804fc:	75 f8                	jne    0x100804f6
100804fe:	8b ca                	mov    ecx,edx
10080500:	c1 e9 02             	shr    ecx,0x2
10080503:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10080505:	8b ca                	mov    ecx,edx
10080507:	83 e1 03             	and    ecx,0x3
1008050a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1008050c:	8d bd fc fd ff ff    	lea    edi,[ebp-0x204]
10080512:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10080515:	83 f8 01             	cmp    eax,0x1
10080518:	0f 85 e3 00 00 00    	jne    0x10080601
1008051e:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
10080524:	85 c9                	test   ecx,ecx
10080526:	74 05                	je     0x1008052d
10080528:	8b 01                	mov    eax,DWORD PTR [ecx]
1008052a:	ff 50 18             	call   DWORD PTR [eax+0x18]
1008052d:	57                   	push   edi
1008052e:	ff 15 24 27 1b 10    	call   DWORD PTR ds:0x101b2724
10080534:	50                   	push   eax
10080535:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1008053b:	68 ac 09 15 10       	push   0x101509ac
10080540:	50                   	push   eax
10080541:	e8 ba c3 f8 ff       	call   0x1000c900
10080546:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
1008054c:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10080552:	83 c4 10             	add    esp,0x10
10080555:	8b 01                	mov    eax,DWORD PTR [ecx]
10080557:	6a 00                	push   0x0
10080559:	6a 00                	push   0x0
1008055b:	6a 01                	push   0x1
1008055d:	6a 01                	push   0x1
1008055f:	6a 01                	push   0x1
10080561:	52                   	push   edx
10080562:	ff 50 08             	call   DWORD PTR [eax+0x8]
10080565:	a3 ac 40 54 10       	mov    ds:0x105440ac,eax
1008056a:	85 c0                	test   eax,eax
1008056c:	0f 84 76 01 00 00    	je     0x100806e8
10080572:	68 b8 09 15 10       	push   0x101509b8
10080577:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
1008057d:	f3 0f 10 05 f0 cc 13 	movss  xmm0,DWORD PTR ds:0x1013ccf0
10080584:	10 
10080585:	0f 57 c9             	xorps  xmm1,xmm1
10080588:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
1008058e:	d9 9d f8 fd ff ff    	fstp   DWORD PTR [ebp-0x208]
10080594:	f3 0f 5d 85 f8 fd ff 	minss  xmm0,DWORD PTR [ebp-0x208]
1008059b:	ff 
1008059c:	8b 01                	mov    eax,DWORD PTR [ecx]
1008059e:	f3 0f 5f c8          	maxss  xmm1,xmm0
100805a2:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100805a7:	ff 50 20             	call   DWORD PTR [eax+0x20]
100805aa:	a1 ac 40 54 10       	mov    eax,ds:0x105440ac
100805af:	83 ec 08             	sub    esp,0x8
100805b2:	8b 30                	mov    esi,DWORD PTR [eax]
100805b4:	c7 44 24 04 cd cc cc 	mov    DWORD PTR [esp+0x4],0x3dcccccd
100805bb:	3d 
100805bc:	c7 04 24 cd cc cc bd 	mov    DWORD PTR [esp],0xbdcccccd
100805c3:	ff 15 14 27 1b 10    	call   DWORD PTR ds:0x101b2714
100805c9:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
100805cf:	83 c4 04             	add    esp,0x4
100805d2:	dd 9d f4 fd ff ff    	fstp   QWORD PTR [ebp-0x20c]
100805d8:	f2 0f 10 85 f4 fd ff 	movsd  xmm0,QWORD PTR [ebp-0x20c]
100805df:	ff 
100805e0:	f2 0f 58 05 c0 ee 13 	addsd  xmm0,QWORD PTR ds:0x1013eec0
100805e7:	10 
100805e8:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100805ec:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100805f1:	ff 56 60             	call   DWORD PTR [esi+0x60]
100805f4:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
100805fa:	8b 01                	mov    eax,DWORD PTR [ecx]
100805fc:	e9 e2 00 00 00       	jmp    0x100806e3
10080601:	83 f8 02             	cmp    eax,0x2
10080604:	75 26                	jne    0x1008062c
10080606:	8b 0d ac 40 54 10    	mov    ecx,DWORD PTR ds:0x105440ac
1008060c:	85 c9                	test   ecx,ecx
1008060e:	0f 84 d4 00 00 00    	je     0x100806e8
10080614:	8b 01                	mov    eax,DWORD PTR [ecx]
10080616:	ff 50 18             	call   DWORD PTR [eax+0x18]
10080619:	5f                   	pop    edi
1008061a:	5e                   	pop    esi
1008061b:	5b                   	pop    ebx
1008061c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1008061f:	33 cd                	xor    ecx,ebp
10080621:	e8 9a 3c 03 00       	call   0x100b42c0
10080626:	8b e5                	mov    esp,ebp
10080628:	5d                   	pop    ebp
10080629:	c2 18 00             	ret    0x18
1008062c:	57                   	push   edi
1008062d:	ff 15 24 27 1b 10    	call   DWORD PTR ds:0x101b2724
10080633:	50                   	push   eax
10080634:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1008063a:	68 ac 09 15 10       	push   0x101509ac
1008063f:	50                   	push   eax
10080640:	e8 bb c2 f8 ff       	call   0x1000c900
10080645:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
1008064b:	8d 95 fc fe ff ff    	lea    edx,[ebp-0x104]
10080651:	83 c4 10             	add    esp,0x10
10080654:	8b 01                	mov    eax,DWORD PTR [ecx]
10080656:	6a 00                	push   0x0
10080658:	6a 00                	push   0x0
1008065a:	6a 01                	push   0x1
1008065c:	6a 01                	push   0x1
1008065e:	6a 00                	push   0x0
10080660:	52                   	push   edx
10080661:	ff 50 08             	call   DWORD PTR [eax+0x8]
10080664:	8b f8                	mov    edi,eax
10080666:	85 ff                	test   edi,edi
10080668:	74 7e                	je     0x100806e8
1008066a:	68 b8 09 15 10       	push   0x101509b8
1008066f:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
10080675:	f3 0f 10 05 f0 cc 13 	movss  xmm0,DWORD PTR ds:0x1013ccf0
1008067c:	10 
1008067d:	0f 57 c9             	xorps  xmm1,xmm1
10080680:	8b 07                	mov    eax,DWORD PTR [edi]
10080682:	8b cf                	mov    ecx,edi
10080684:	d9 9d f8 fd ff ff    	fstp   DWORD PTR [ebp-0x208]
1008068a:	f3 0f 5d 85 f8 fd ff 	minss  xmm0,DWORD PTR [ebp-0x208]
10080691:	ff 
10080692:	f3 0f 5f c8          	maxss  xmm1,xmm0
10080696:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1008069b:	ff 50 20             	call   DWORD PTR [eax+0x20]
1008069e:	8b 37                	mov    esi,DWORD PTR [edi]
100806a0:	83 ec 08             	sub    esp,0x8
100806a3:	c7 44 24 04 cd cc cc 	mov    DWORD PTR [esp+0x4],0x3dcccccd
100806aa:	3d 
100806ab:	c7 04 24 cd cc cc bd 	mov    DWORD PTR [esp],0xbdcccccd
100806b2:	ff 15 14 27 1b 10    	call   DWORD PTR ds:0x101b2714
100806b8:	dd 9d f4 fd ff ff    	fstp   QWORD PTR [ebp-0x20c]
100806be:	f2 0f 10 85 f4 fd ff 	movsd  xmm0,QWORD PTR [ebp-0x20c]
100806c5:	ff 
100806c6:	83 c4 04             	add    esp,0x4
100806c9:	f2 0f 58 05 c0 ee 13 	addsd  xmm0,QWORD PTR ds:0x1013eec0
100806d0:	10 
100806d1:	8b cf                	mov    ecx,edi
100806d3:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100806d7:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100806dc:	ff 56 60             	call   DWORD PTR [esi+0x60]
100806df:	8b 07                	mov    eax,DWORD PTR [edi]
100806e1:	8b cf                	mov    ecx,edi
100806e3:	6a 00                	push   0x0
100806e5:	ff 50 10             	call   DWORD PTR [eax+0x10]
100806e8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100806eb:	5f                   	pop    edi
100806ec:	5e                   	pop    esi
100806ed:	33 cd                	xor    ecx,ebp
100806ef:	5b                   	pop    ebx
100806f0:	e8 cb 3b 03 00       	call   0x100b42c0
100806f5:	8b e5                	mov    esp,ebp
100806f7:	5d                   	pop    ebp
100806f8:	c2 18 00             	ret    0x18
100806fb:	e8 ae 44 03 00       	call   0x100b4bae
10080700:	cc                   	int3
10080701:	cc                   	int3
10080702:	cc                   	int3
10080703:	cc                   	int3
10080704:	cc                   	int3
10080705:	cc                   	int3
10080706:	cc                   	int3
10080707:	cc                   	int3
10080708:	cc                   	int3
10080709:	cc                   	int3
1008070a:	cc                   	int3
1008070b:	cc                   	int3
1008070c:	cc                   	int3
1008070d:	cc                   	int3
1008070e:	cc                   	int3
1008070f:	cc                   	int3
10080710:	55                   	push   ebp
10080711:	8b ec                	mov    ebp,esp
10080713:	8b c1                	mov    eax,ecx
10080715:	80 38 00             	cmp    BYTE PTR [eax],0x0
10080718:	74 44                	je     0x1008075e
1008071a:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
10080720:	85 c9                	test   ecx,ecx
10080722:	74 3a                	je     0x1008075e
10080724:	80 7d 08 00          	cmp    BYTE PTR [ebp+0x8],0x0
10080728:	74 1a                	je     0x10080744
1008072a:	c7 80 bc 00 00 00 01 	mov    DWORD PTR [eax+0xbc],0x1
10080731:	00 00 00 
10080734:	8b 01                	mov    eax,DWORD PTR [ecx]
10080736:	6a 01                	push   0x1
10080738:	ff 50 18             	call   DWORD PTR [eax+0x18]
1008073b:	b8 01 00 00 00       	mov    eax,0x1
10080740:	5d                   	pop    ebp
10080741:	c2 04 00             	ret    0x4
10080744:	c7 80 bc 00 00 00 00 	mov    DWORD PTR [eax+0xbc],0x0
1008074b:	00 00 00 
1008074e:	8b 01                	mov    eax,DWORD PTR [ecx]
10080750:	6a 00                	push   0x0
10080752:	ff 50 18             	call   DWORD PTR [eax+0x18]
10080755:	b8 01 00 00 00       	mov    eax,0x1
1008075a:	5d                   	pop    ebp
1008075b:	c2 04 00             	ret    0x4
1008075e:	33 c0                	xor    eax,eax
10080760:	5d                   	pop    ebp
10080761:	c2 04 00             	ret    0x4
10080764:	cc                   	int3
10080765:	cc                   	int3
10080766:	cc                   	int3
10080767:	cc                   	int3
10080768:	cc                   	int3
10080769:	cc                   	int3
1008076a:	cc                   	int3
1008076b:	cc                   	int3
1008076c:	cc                   	int3
1008076d:	cc                   	int3
1008076e:	cc                   	int3
1008076f:	cc                   	int3
10080770:	b8 01 00 00 00       	mov    eax,0x1
10080775:	c3                   	ret
10080776:	cc                   	int3
10080777:	cc                   	int3
10080778:	cc                   	int3
10080779:	cc                   	int3
1008077a:	cc                   	int3
1008077b:	cc                   	int3
1008077c:	cc                   	int3
1008077d:	cc                   	int3
1008077e:	cc                   	int3
1008077f:	cc                   	int3
10080780:	55                   	push   ebp
10080781:	8b ec                	mov    ebp,esp
10080783:	56                   	push   esi
10080784:	8b f1                	mov    esi,ecx
10080786:	80 3e 00             	cmp    BYTE PTR [esi],0x0
10080789:	75 07                	jne    0x10080792
1008078b:	33 c0                	xor    eax,eax
1008078d:	5e                   	pop    esi
1008078e:	5d                   	pop    ebp
1008078f:	c2 04 00             	ret    0x4
10080792:	83 3d a8 40 54 10 00 	cmp    DWORD PTR ds:0x105440a8,0x0
10080799:	0f 84 99 00 00 00    	je     0x10080838
1008079f:	6a 00                	push   0x0
100807a1:	68 a8 ec 14 10       	push   0x1014eca8
100807a6:	ff 15 c4 26 1b 10    	call   DWORD PTR ds:0x101b26c4
100807ac:	83 c4 08             	add    esp,0x8
100807af:	85 c0                	test   eax,eax
100807b1:	0f 85 81 00 00 00    	jne    0x10080838
100807b7:	c6 86 dd 00 00 00 01 	mov    BYTE PTR [esi+0xdd],0x1
100807be:	38 86 c4 00 00 00    	cmp    BYTE PTR [esi+0xc4],al
100807c4:	74 06                	je     0x100807cc
100807c6:	88 86 c4 00 00 00    	mov    BYTE PTR [esi+0xc4],al
100807cc:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100807d1:	0f 57 c0             	xorps  xmm0,xmm0
100807d4:	0f 2e c8             	ucomiss xmm1,xmm0
100807d7:	c6 46 36 00          	mov    BYTE PTR [esi+0x36],0x0
100807db:	9f                   	lahf
100807dc:	f6 c4 44             	test   ah,0x44
100807df:	7a 3e                	jp     0x1008081f
100807e1:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
100807e7:	85 c9                	test   ecx,ecx
100807e9:	74 05                	je     0x100807f0
100807eb:	8b 01                	mov    eax,DWORD PTR [ecx]
100807ed:	ff 50 18             	call   DWORD PTR [eax+0x18]
100807f0:	c7 86 b8 00 00 00 00 	mov    DWORD PTR [esi+0xb8],0x0
100807f7:	00 00 00 
100807fa:	b8 01 00 00 00       	mov    eax,0x1
100807ff:	c7 86 cc 00 00 00 00 	mov    DWORD PTR [esi+0xcc],0x0
10080806:	00 00 00 
10080809:	c7 86 d0 00 00 00 00 	mov    DWORD PTR [esi+0xd0],0x0
10080810:	00 00 00 
10080813:	c6 86 dd 00 00 00 00 	mov    BYTE PTR [esi+0xdd],0x0
1008081a:	5e                   	pop    esi
1008081b:	5d                   	pop    ebp
1008081c:	c2 04 00             	ret    0x4
1008081f:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10080825:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008082a:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
10080830:	f3 0f 11 86 d0 00 00 	movss  DWORD PTR [esi+0xd0],xmm0
10080837:	00 
10080838:	b8 01 00 00 00       	mov    eax,0x1
1008083d:	5e                   	pop    esi
1008083e:	5d                   	pop    ebp
1008083f:	c2 04 00             	ret    0x4
10080842:	cc                   	int3
10080843:	cc                   	int3
10080844:	cc                   	int3
10080845:	cc                   	int3
10080846:	cc                   	int3
10080847:	cc                   	int3
10080848:	cc                   	int3
10080849:	cc                   	int3
1008084a:	cc                   	int3
1008084b:	cc                   	int3
1008084c:	cc                   	int3
1008084d:	cc                   	int3
1008084e:	cc                   	int3
1008084f:	cc                   	int3
