
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10078920 <.text+0x77920>:
10078920:	68 a4 34 54 10       	push   $0x105434a4
10078925:	e8 56 1e 00 00       	call   0x1007a780
1007892a:	8b 0d 00 26 1b 10    	mov    0x101b2600,%ecx
10078930:	83 c4 04             	add    $0x4,%esp
10078933:	85 c9                	test   %ecx,%ecx
10078935:	74 6f                	je     0x100789a6
10078937:	8b 81 88 14 00 00    	mov    0x1488(%ecx),%eax
1007893d:	85 c0                	test   %eax,%eax
1007893f:	74 65                	je     0x100789a6
10078941:	80 b8 bc 00 00 00 00 	cmpb   $0x0,0xbc(%eax)
10078948:	74 5c                	je     0x100789a6
1007894a:	80 b8 bd 00 00 00 00 	cmpb   $0x0,0xbd(%eax)
10078951:	75 53                	jne    0x100789a6
10078953:	c6 05 b8 27 1b 10 00 	movb   $0x0,0x101b27b8
1007895a:	8b 81 88 14 00 00    	mov    0x1488(%ecx),%eax
10078960:	68 ff 00 00 00       	push   $0xff
10078965:	68 ff 00 00 00       	push   $0xff
1007896a:	68 ff 00 00 00       	push   $0xff
1007896f:	c6 80 be 00 00 00 01 	movb   $0x1,0xbe(%eax)
10078976:	a1 00 26 1b 10       	mov    0x101b2600,%eax
1007897b:	68 ff 00 00 00       	push   $0xff
10078980:	8b 80 88 14 00 00    	mov    0x1488(%eax),%eax
10078986:	c6 80 cc 00 00 00 00 	movb   $0x0,0xcc(%eax)
1007898d:	a1 00 26 1b 10       	mov    0x101b2600,%eax
10078992:	8b 80 88 14 00 00    	mov    0x1488(%eax),%eax
10078998:	8b 88 b4 02 00 00    	mov    0x2b4(%eax),%ecx
1007899e:	8b 01                	mov    (%ecx),%eax
100789a0:	ff 90 20 01 00 00    	call   *0x120(%eax)
100789a6:	80 3d 40 33 54 10 00 	cmpb   $0x0,0x10543340
100789ad:	74 0f                	je     0x100789be
100789af:	68 00 f8 14 10       	push   $0x1014f800
100789b4:	ff 15 54 26 1b 10    	call   *0x101b2654
100789ba:	83 c4 04             	add    $0x4,%esp
100789bd:	c3                   	ret
100789be:	83 3d c0 2b 54 10 00 	cmpl   $0x0,0x10542bc0
100789c5:	74 0e                	je     0x100789d5
100789c7:	68 14 f8 14 10       	push   $0x1014f814
100789cc:	ff 15 54 26 1b 10    	call   *0x101b2654
100789d2:	83 c4 04             	add    $0x4,%esp
100789d5:	a1 10 2f 1b 10       	mov    0x101b2f10,%eax
100789da:	85 c0                	test   %eax,%eax
100789dc:	7e 05                	jle    0x100789e3
100789de:	83 f8 05             	cmp    $0x5,%eax
100789e1:	7e 26                	jle    0x10078a09
100789e3:	83 3d d8 36 54 10 00 	cmpl   $0x0,0x105436d8
100789ea:	74 0e                	je     0x100789fa
100789ec:	68 24 f8 14 10       	push   $0x1014f824
100789f1:	ff 15 54 26 1b 10    	call   *0x101b2654
100789f7:	83 c4 04             	add    $0x4,%esp
100789fa:	68 00 08 00 00       	push   $0x800
100789ff:	b9 88 da 18 10       	mov    $0x1018da88,%ecx
10078a04:	e8 17 e0 ff ff       	call   0x10076a20
10078a09:	c3                   	ret
10078a0a:	cc                   	int3
10078a0b:	cc                   	int3
10078a0c:	cc                   	int3
10078a0d:	cc                   	int3
10078a0e:	cc                   	int3
10078a0f:	cc                   	int3
10078a10:	68 a4 34 54 10       	push   $0x105434a4
10078a15:	e8 d6 1d 00 00       	call   0x1007a7f0
10078a1a:	83 c4 04             	add    $0x4,%esp
10078a1d:	83 3d c0 2b 54 10 00 	cmpl   $0x0,0x10542bc0
10078a24:	74 0c                	je     0x10078a32
10078a26:	68 34 f8 14 10       	push   $0x1014f834
10078a2b:	ff 15 54 26 1b 10    	call   *0x101b2654
10078a31:	59                   	pop    %ecx
10078a32:	c3                   	ret
10078a33:	cc                   	int3
10078a34:	cc                   	int3
10078a35:	cc                   	int3
10078a36:	cc                   	int3
10078a37:	cc                   	int3
10078a38:	cc                   	int3
10078a39:	cc                   	int3
10078a3a:	cc                   	int3
10078a3b:	cc                   	int3
10078a3c:	cc                   	int3
10078a3d:	cc                   	int3
10078a3e:	cc                   	int3
10078a3f:	cc                   	int3
10078a40:	8b 0d 00 26 1b 10    	mov    0x101b2600,%ecx
10078a46:	85 c9                	test   %ecx,%ecx
10078a48:	74 6f                	je     0x10078ab9
10078a4a:	8b 81 88 14 00 00    	mov    0x1488(%ecx),%eax
10078a50:	85 c0                	test   %eax,%eax
10078a52:	74 65                	je     0x10078ab9
10078a54:	80 b8 bc 00 00 00 00 	cmpb   $0x0,0xbc(%eax)
10078a5b:	74 5c                	je     0x10078ab9
10078a5d:	80 b8 bd 00 00 00 00 	cmpb   $0x0,0xbd(%eax)
10078a64:	75 53                	jne    0x10078ab9
10078a66:	c6 05 b8 27 1b 10 00 	movb   $0x0,0x101b27b8
10078a6d:	8b 81 88 14 00 00    	mov    0x1488(%ecx),%eax
10078a73:	68 ff 00 00 00       	push   $0xff
10078a78:	68 ff 00 00 00       	push   $0xff
10078a7d:	68 ff 00 00 00       	push   $0xff
10078a82:	c6 80 be 00 00 00 01 	movb   $0x1,0xbe(%eax)
10078a89:	a1 00 26 1b 10       	mov    0x101b2600,%eax
10078a8e:	68 ff 00 00 00       	push   $0xff
10078a93:	8b 80 88 14 00 00    	mov    0x1488(%eax),%eax
10078a99:	c6 80 cc 00 00 00 00 	movb   $0x0,0xcc(%eax)
10078aa0:	a1 00 26 1b 10       	mov    0x101b2600,%eax
10078aa5:	8b 80 88 14 00 00    	mov    0x1488(%eax),%eax
10078aab:	8b 88 b4 02 00 00    	mov    0x2b4(%eax),%ecx
10078ab1:	8b 01                	mov    (%ecx),%eax
10078ab3:	ff 90 20 01 00 00    	call   *0x120(%eax)
10078ab9:	83 3d 10 2f 1b 10 00 	cmpl   $0x0,0x101b2f10
10078ac0:	75 0b                	jne    0x10078acd
10078ac2:	68 10 35 54 10       	push   $0x10543510
10078ac7:	e8 b4 1c 00 00       	call   0x1007a780
10078acc:	59                   	pop    %ecx
10078acd:	c3                   	ret
10078ace:	cc                   	int3
10078acf:	cc                   	int3
10078ad0:	68 10 35 54 10       	push   $0x10543510
10078ad5:	e8 16 1d 00 00       	call   0x1007a7f0
10078ada:	59                   	pop    %ecx
10078adb:	c3                   	ret
